#include<iostream>
#include"circle.h"
using namespace std;
circle::circle(float x,float y,float r):point(x,y),radius(r){}

void circle::set_radius(float r){radius=r;}

float circle::get_radius() const { return radius;}

float circle::area() const {return PI*pow(radius,2);}

ostream& operator << (ostream& output,const circle& c)
{
	output<<"["<<c.x<<','<<c.y<<"],r="<<c.radius;
	return output;
}

