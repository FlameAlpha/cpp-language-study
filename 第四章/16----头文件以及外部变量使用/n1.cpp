#include<iostream>
#include<cmath>
#include"n2.h"
using namespace std;
int main()
{
 extern int a,b,m;
 while(1){
 cout<<"请输入数字:";
 cin>>a;
 cout<<"n!="<<n_(a)<<endl;
 cout<<"请输入数字幂次a，m：";
 cin>>a>>m;
 a=a*b;
 cout<<"a^m="<<power(a,m)<<endl;
}
 return 0;
}
