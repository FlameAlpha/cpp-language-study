#include<iostream>
#include<cmath>
using namespace std;
double Pn(int x,int n)
{
    if(n==0){ return 1;}
    if(n==1) {return x;}
    if(n>=1) {return((2*n-1)*x-Pn(x,(n-1))-(n-1)*Pn(x,(n-2))/n);}
}
int main()
{
 int x,n;
 while(1){
 cout<<"ÇëÊäÈëX,nÖµ:";
 cin>>x>>n; 
 cout<<Pn(x,n)<<endl;
}
}


