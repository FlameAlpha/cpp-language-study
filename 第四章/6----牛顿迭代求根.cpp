#include<iostream>
#include<cmath>
using namespace std;
double fx(int a,int b,int c,int d,int x)
{
	return (3*a*x*x+2*b*x+c);
}
double Fx(int a,int b,int c,int d,int x)
{
	return (a*x*x*x+b*x*x+c*x+d);
}
double niu(int a,int b,int c,int d,int n,int x)
{
	if(n==1) return x;
	else return niu(a,b,c,d,n-1,x)-Fx(a,b,c,d,niu(a,b,c,d,n-1,x))/fx(a,b,c,d,niu(a,b,c,d,n-1,x));
}
int main()
{
    double x; int n,m;
    while(1){
    cin>>x>>n;
    cout<<niu(1,2,3,4,n,x);
	for(;n>1;n--)
	{
		x=x-Fx(1,2,3,4,x)/fx(1,2,3,4,x);
	}
	cout<<x<<endl;
	}
	return 0;
} 
