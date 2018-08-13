#include"rectangle.h"

rectangle::rectangle(float l,float w):length(l),width(w){};

void rectangle::set_rectangle(float l,float w){length=l; width=w; };

float rectangle::area() const {return length*width;};

ostream& operator << (ostream&output,rectangle&rec)
{
	output<<"length:"<<rec.length<<endl;
	output<<"width:"<<rec.width<<endl;
	output<<"area:"<<rec.area();
	return output;
}
