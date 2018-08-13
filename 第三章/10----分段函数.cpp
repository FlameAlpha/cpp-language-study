#include<iostream>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
   int x,y;
   cout<<"请输入X值:"; 
   cin>>x;
   if(x>1) y=x;
   if((x>=1)&&(x<10)) y=2*x-1;
   if(x>=10) y=3*x-11;
   cout<<"Y的值为："<<y; 
}  
