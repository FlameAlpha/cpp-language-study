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
 int a,b,c;
 while(1){
 cout<<"ÇëÊäÈëÊý×Öa,b,c:";
 cin>>a>>b>>c;
 cout<<n_(b)+n_(a)+n_(c)<<endl;
}
 return 0;
}


