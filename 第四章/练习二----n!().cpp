#include<iostream>
#include<cmath>
using namespace std;
double  n_(int n)
{
	double m;
	if(n==1) m=1;
	else m=n*n_(n-1);
	return m;
}
int main()
{
 int a;
 while(1){
 cout<<"ÇëÊäÈëÊý×Ö£º";
 cin>>a;
 cout<<n_(a)<<endl;
}
 return 0;
}

