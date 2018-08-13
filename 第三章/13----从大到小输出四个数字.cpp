#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
int a,b,c,d,e[5],f;
cout<<"输入四个数字：";
cin>>a>>b>>c>>d;
if(a<b){f=a; a=b; b=f;}
if(a<c){f=a; a=c; c=b; b=f;}
if(a<d){f=a; a=d; d=c; c=b; b=f;}
if(b<c){f=b;b=c;c=f;}
if(b<d){f=b;b=d;d=c;c=f;}
if(c<d){f=c;c=d;d=f;}
cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d; 
return 0;
    
} 
