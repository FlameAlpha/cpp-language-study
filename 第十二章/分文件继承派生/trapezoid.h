#ifndef __TRAPEZOID_H__
#define __TRAPEZOID_H__
#include"shape.h"
class trapezoid
{
	public:
	trapezoid(float,float,float,float);
	void set_trapezoid(float,float,float,float);
	virtual float area();
	float get_up_bottom(){return up;}
	float get_down_bottom(){return down;}
	float left_hypotenuse(){return left;}
	float right_hypotenuse(){return right;}
	virtual void shapeName() {cout<<"trapezoid:";}
	friend ostream& operator << (ostream&,trapezoid&);
	private:
	float up;
	float down;
	float left;
	float right;
};
#endif //__TRAPEZOID_H__ 
