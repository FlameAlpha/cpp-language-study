#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c[101],d,flag;
	for(a=0;a<=100;a++) c[a]=1;
	for(a=2;a<=100;a++)
	{
		if(c[a]==0) continue;
		flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1)
		{
		c[a]=a;
		for(d=(a+1);d<=100;d++)
		{
			if(d%a==0) c[d]=0;
		}
		} 
		else c[a]=0;
	}
	for(a=2;a<=100;a++) {
	if(c[a]==0) continue;
	cout<<c[a]<<'\t';
	}
	return 0;
}
