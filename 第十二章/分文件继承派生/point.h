#ifndef __POINT_H__
#define __POINT_H__
#include"shape.h"
class point:public shape
{
	public:
		point(float ,float );
		void set_point(float ,float);
		float getX() const {return x;}
		float getY() const {return y;}
		virtual void shapeName() const {cout<<"point:";}
		friend ostream& operator <<(ostream&,const point &);
	protected:
		float x;
		float y;
};
#endif  //__POINT_H__
