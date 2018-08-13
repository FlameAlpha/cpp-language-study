#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b[100],c;char e[100];
	cin>>a;
	for(c=0;c<100;c++)
	{
		b[c]=a%(int)(pow(10,c+1))/(int)(pow(10,c));
		e[c]=b[c]+48; 
		if(a<=pow(10,c+1)) break;
	}
	for(;c>=0;c--) cout<<e[c];
	return 0;
} 
