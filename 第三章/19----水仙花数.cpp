#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
inline _pow(int a,int b)
{
	int x=1;
	for(;b>0;b--) x=x*a;
	return x;
}
int number(int a)
{
	return(pow(a/1000,3)+pow(a%1000/100,3)+pow(a%100/10,3)+pow(a%10,3));
}
int main()
{ 
int a=2187;
for(a=2187;a>0;a--)
{
	if(a==number(a)) cout<<a<<endl;
} 
return 0;
} 
