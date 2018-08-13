#include<iostream>
using namespace std;
int main()
{
   int a=0,b=14,c,d;
   int a_[15]={0,1,3,4,6,7,8,10,12,13,14,16,17,19,21};
   while(1){
   a=0,b=14;	
   cin>>c;
   while(1){
   	 if(a_[d]>=c) b=d;
     if(a_[d]<=c) a=d;
   	 if(c==a_[a]){ cout<<"在第"<<a+1<<"位"; break;}
   	 if(c==a_[b]){ cout<<"在第"<<b+1<<"位"; break;}
     d=(b+a)/2;
     if(a_[d]==c){ cout<<"在第"<<d+1<<"位"; break;}
   if((b-a)==1){cout<<"不存在"; break;}
   }
 }
}
