#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
double x,a=1,b=2,c,num=0;
for(x=20;x>0;x--)
{
	num=num+b/a;
	cout<<b<<"/"<<a<<endl;
	c=b;
	b=a+b;
	a=c;
}
cout<<num;
return 0;
} 
