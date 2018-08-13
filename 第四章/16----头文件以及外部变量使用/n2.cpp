#include<iostream>
#include<cmath>
using namespace std;
int a,b=2,m; 
double  n_(int n)
{
	double m;
	if(n==1) m=1;
	else m=n*n_(n-1);
	return m;
}
double power(int a,int m)
{
	int x=1;
	for(;m>0;m--) x=x*a;
	return x; 
}
