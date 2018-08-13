#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include"point.h"
class circle:public point
{
	public:
		circle(float x,float y,float r);
		void set_radius(float);
		float get_radius() const;
		virtual float area() const;
		virtual void shapeName() const {cout<<"circle:";}
		friend ostream& operator <<(ostream&,const circle&);
	protected:
		float radius;
};
#endif  //__CIRCLE_H__
