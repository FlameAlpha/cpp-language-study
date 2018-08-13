#include<iostream>
#include<string>
using namespace std;
int main()
{
   int a,b; 
   char str[]="* * * * *";
   for(a=1;a<=4;a++){
   for(b=0;b<a;b++) cout<<" ";
   cout<<str<<endl;}
}
