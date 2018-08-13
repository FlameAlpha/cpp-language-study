#include<iostream>
#include<iomanip>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
double x0=1,x1,a;
cin>>a;
x1=0.5*(x0+a/x0);
while(fabs(x0-x1)>=1e-5)
{
	x0=x1;
	x1=0.5*(x0+a/x0);
}
cout<<a<<"的平方根为：";
cout<<setiosflags(ios::fixed)<<setprecision(8)<<x1<<endl;
return 0;
} 
