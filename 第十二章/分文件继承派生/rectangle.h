#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include"shape.h"
class rectangle:public shape
{
	public:
		rectangle(float,float);
		void set_rectangle(float,float);
		float getwidth() const {return width;}
		float getlength() const {return length;}
		virtual float area() const;
		virtual void shapeName () {cout<<"rectangle:";}
		friend ostream& operator << (ostream&,rectangle&);
	private:
		float length;
		float width;
};
#endif  //__RECTANGLE_H__
