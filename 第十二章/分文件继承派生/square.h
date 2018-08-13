#ifndef __SQUARE_H__
#define __SQUARE_H__
#include"square.h"
class square
{
	public:
	square(float s):side(s){};
	void set_square(float s){side=s;};
	float get_side(){return side;}
	virtual float area() {return side*side;}
	virtual void shapeName() {cout<<"square:";}
	friend ostream& operator << (ostream&,square&);
	private:
	float side;
};

ostream& operator << (ostream&output,square&squ)
{
	output<<"side:"<<squ.side<<endl;
	output<<"area:"<<squ.area();
}
#endif //__SQUARE_H__
