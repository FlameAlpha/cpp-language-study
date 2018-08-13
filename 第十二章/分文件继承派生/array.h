#ifndef __ARRAY_H__
#define __ARRAY_H__
#include<iostream>
#include<cmath>
using namespace std;
struct int_point{	
  int X;
  int Y;
  int value;
};
class Array 
{
	private:
		int_point array[20][20];
		int line;
		int row;
	public:
		Array(){}
		Array(int a,int l,int r):line(l-1),row(r-1){
		int x,y;
		for(x=0;x<r;x++)
		for(y=0;y<l;y++)
		array[x][y].value=a;
	    }
		friend Array operator + (Array&,Array&);
		friend Array operator - (Array&,Array&);
		friend istream&operator >> (istream&,Array&);
		friend ostream&operator << (ostream&,Array&);
};
#endif  //__ARRAY_H__
