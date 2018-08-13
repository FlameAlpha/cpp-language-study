#ifndef __SHAPE_H__
#define __SHAPE_H__
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.141592653
class shape
{
	public :
		virtual float area() const {return 0.0;}
		virtual float volume() const {return 0.0;}
		virtual void shapeName() const{}; 
};
#endif  //__SHAPE_H__
