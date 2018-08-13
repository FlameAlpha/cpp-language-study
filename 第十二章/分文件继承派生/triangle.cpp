#include"triangle.h"

triangle::triangle(float sone,float stwo,float sthr):sideone(sone),sidetwo(stwo),sidethree(sthr){};

void triangle::set_triangle(float sone,float stwo,float sthr){sideone=sone; sidetwo=stwo; sidethree=sthr;};

float triangle::getside(int side) const 
{
switch (side){
case 1: return sideone; break;
case 2: return sidetwo; break;
case 3: return sidethree; break;
}
}

float triangle::area() const
{
	float s,p;
	p=(sideone+sidetwo+sidethree)/2;
	s=sqrt(p*(p-sideone)*(p-sidetwo)*(p-sidethree));
	return s;
}

ostream& operator << (ostream&output,triangle&tri)
{
	output<<"sideone="<<tri.sideone<<endl;
	output<<"sidetwo="<<tri.sidetwo<<endl;
	output<<"sidethree="<<tri.sidethree<<endl;
	output<<"area="<<tri.area();
	return output;
}
