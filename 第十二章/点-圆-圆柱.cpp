#include<iostream>
#include<cmath>
#define PI 3.141592653
using namespace std;
class shape
{
	public :
		virtual float area() const {return 0.0;}
		virtual float volume() const {return 0.0;}
		virtual void shapName() const{}; 
};
class point:public shape
{
	public:
		point(float ,float );
		void set_point(float ,float);
		float getX() const {return x;}
		float getY() const {return y;}
		virtual void shapeName() const {cout<<"point:";}
		friend ostream& operator <<(ostream&,const point &);
	protected:
		int x;
		int y;
};
point::point(float a,float b)
{
	x=a; y=b;
} 
void point::set_point(float a,float b)
{
	x=a; y=b;
}
ostream& operator << (ostream& output,const point& p)
{
	output<<"["<<p.x<<"."<<p.y<<"]";
	return output;
}
class circle:public point
{
	public:
		circle(float x,float y,float r);
		void set_radius(float);
		float get_radius() const;
		virtual float area() const;
		virtual void shapeName() const {cout<<"circle:";}
		friend ostream& operator <<(ostream&,const circle&);
	protected:
		float radius;
};
circle::circle(float x,float y,float r):point(x,y),radius(r){}

void circle::set_radius(float r){radius=r;}

float circle::get_radius() const { return radius;}

float circle::area() const {return PI*pow(radius,2);}

ostream& operator << (ostream& output,const circle& c)
{
	output<<"["<<c.x<<','<<c.y<<"],r="<<c.radius;
	return output;
}

class cylinder:public circle
{
	public:
		cylinder(float x,float y,float r,float h);
		void set_cylinder(float);
		virtual float area() const;
		virtual float volume() const;
		virtual void shapeName() const{ cout<<"cylinder:";}
		friend ostream& operator << (ostream&,const cylinder&);
	protected:
		float height;
};
cylinder::cylinder(float x,float y,float r,float h):circle(x,y,r),height(h){}

void cylinder::set_cylinder(float h){height=h;}

float cylinder::area() const {return 2*PI*pow(radius,2)+2*PI*radius*height;}

float cylinder::volume() const {return circle::area()*height;}

ostream& operator << (ostream& output,const cylinder& c)
{
	output<<"["<<c.x<<','<<c.y<<"],r="<<c.radius<<",h="<<c.height;
	return output;
}

int main()
{
	point Point(3.2,4.3);
	circle Circle(2.4,1.2,5.6);
	cylinder Cylinder(3.5,6.4,5.2,10.5);
	Point.shapeName();
	cout<<Point<<endl;
	Circle.shapeName();
	cout<<Circle<<endl;
	Cylinder.shapeName();
	cout<<Cylinder;
	
}