#include"point.h"
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
