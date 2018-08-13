#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	a=1;
	for(c=10;c>1;c--){
	b=2*(a+1);
	a=b;
	cout<<b<<endl; 
	} 
	cout<<b;
} 
