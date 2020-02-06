#include<iostream>
#include<cmath>
using namespace std;
class complex
{
	public:
		complex(){ real=0; imag=0; }
		complex(double r):real(r){imag=0;}
		complex(double r,double i):real(r),imag(i){}
        friend complex operator + (complex &,complex &);
        friend complex operator + (double &,complex &);
        friend complex operator + (complex &,double &);
        friend complex operator - (complex &,complex &);
        friend complex operator * (complex &,complex &);
        friend complex operator / (complex &,complex &);
        friend ostream &operator << (ostream &,complex &);
        friend istream &operator >> (istream &,complex &);
        operator double();
    private:
    	double real;
    	double imag;
};
complex::operator double(){return real;}
ostream& operator << (ostream &output,complex &c)
{
	if(c.imag<0)
	output<<"("<<c.real<<c.imag<<"i)";
	else output<<"("<<c.real<<"+"<<c.imag<<"i)";
}
istream& operator >> (istream &input,complex &c)
{
	input>>c.real>>c.imag;
}
complex operator + (double &c1,complex &c2)
{
	complex c;
	c.real=c1+c2.real;
	c.imag=c2.imag;
	return c;
}
complex operator + (complex &c2,double &c1)
{
	complex c;
	c.real=c1+c2.real;
	c.imag=c2.imag;
	return c;
}
complex operator + (complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real+c2.real;
	c.imag=c1.imag+c2.imag;
	return c;
}
complex operator - (complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real-c2.real;
	c.imag=c1.imag-c2.imag;
	return c;
}
complex operator * (complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real*c2.real-c1.imag*c2.imag;
	c.imag=c1.real*c2.imag+c2.real*c1.imag;
	return c;
}
complex operator / (complex &c1,complex &c2)
{
	complex c; double comp;
	comp=pow(c2.real,2)+pow(c2.imag,2);
	c.real=(c1.real*c2.real+c1.imag*c2.imag)/comp;
	c.imag=(c2.real*c1.imag-c1.real*c2.imag)/comp;
	return c;
}
int main()
{
	complex c1(1,2),c2(3),c3; double b;
	c3=c1+c2;
	cout<<c3<<endl;
	c3=c1-c2;
	cout<<c3<<endl;
	c3=c1*c2;
	cout<<c3<<endl;
	c3=c1/c2;
	cout<<c3<<endl;
	b=c3+2.5;
	cout<<b;
	return 0;
}
