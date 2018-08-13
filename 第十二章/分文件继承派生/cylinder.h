#ifndef __CYLINDER_H__
#define __CYLINDER_H__
#include"circle.h"
class cylinder:public circle
{
	public:
		cylinder(float x,float y,float r,float h);
		void set_cylinder(float);
		virtual float area() const;
		virtual float volume() const;
		virtual void shapeName() const{ cout<<"cylinder:";}
		friend ostream& operator << (ostream&,const cylinder&);
	protected:
		float height;
};
#endif  //__CYLINDER_H__
