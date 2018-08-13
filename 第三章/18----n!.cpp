#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
float En(int n)
{
	float En=1;
	while(1)
	{
		En=En*n;
		n--;
		if(n==1) break;
	}
	return En;
}
int main()
{ 
float En_num;int a;
for(a=1;a<=20;a++)
{
	En_num+=En(a);
	cout<<En(a)<<endl;
}
cout<<En_num;
return 0;
} 
