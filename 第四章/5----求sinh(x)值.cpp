#include<iostream>
#include<cmath>
using namespace std;
double E(int x)
{
	int n;
	double m=1;
    for(n=0;n<x;n++)
	m=M_E*m;
	return m;
}
int main()
{
 int a;
 while(1){
 cout<<"ÇëÊäÈëXÖµ:";
 cin>>a; 
 cout<<"sinh("<<a<<")="<<(E(a)-1/E(a))/2<<endl;
 cout<<(M_E-1/M_E)/2;
}
}


