#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
int a,b,c[7]={1,3,5,7,5,3,1};
for(a=0;a<7;a++){
for(b=c[a];b>0;b--)
{
	cout<<"*";
}
cout<<endl;
}
return 0;
} 
