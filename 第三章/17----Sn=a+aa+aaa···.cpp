#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
inline int _pow(int a,int b)
{
	int x=1;
	for(;b>0;b--) x=x*a;
	return x;
}
int main()
{ 
int a=0,aa=0,aaa=0,n=1,m;
cout<<"ÊäÈëa,b:";
cin>>a>>n;
for(m=0;m<n;m++){ aa=aa+a*_pow(10,m);  aaa=aaa+aa;  cout<<aa<<endl;}
cout<<aaa;
return 0;
} 
