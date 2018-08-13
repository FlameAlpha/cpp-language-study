#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#include"shape.h"
class triangle:public shape
{
	public:
		triangle(float,float,float);
		void set_triangle(float,float,float);
		float getside(int ) const ;
		virtual float area() const;
		virtual void shapeName () {cout<<"triangle:";}
		friend ostream& operator << (ostream&,triangle&);
	private:
		float sideone;
		float sidetwo;
		float sidethree;
};
#endif //__TRIANGLE_H__
