#include<iostream>
using namespace std;
template<class T>
T max(T a,T b,T c)
{
	if(b>=a) a=b;
	if(c>=a) a=c;
	return a;
} 
int main() 
{
	int i1=5,i2=9,i3=44;
	long d1=50,d2=90,d3=55;
	double g1=5.12,g2=9.34,g3=60;
	cout<<max(i1,i2,i3)<<endl;
	cout<<max(d1,d2,d3)<<endl;
	cout<<max(g1,g2,g3)<<endl;
	return 0;
}
