#include<iostream>
#include"cylinder.h"
using namespace std;
cylinder::cylinder(float x,float y,float r,float h):circle(x,y,r),height(h){}

void cylinder::set_cylinder(float h){height=h;}

float cylinder::area() const {return 2*PI*pow(radius,2)+2*PI*radius*height;}

float cylinder::volume() const {return circle::area()*height;}

ostream& operator << (ostream& output,const cylinder& c)
{
	output<<"["<<c.x<<','<<c.y<<"],r="<<c.radius<<",h="<<c.height;
	return output;
}
