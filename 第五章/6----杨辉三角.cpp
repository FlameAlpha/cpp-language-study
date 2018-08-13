#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[12]={0},b[12]={0},c,d;
	cout<<(a[1]=1)<<endl; 
	for(c=0;c<10;c++){
	for(d=0;d<=(c+1);d++)
	{
	 if((c+1)%2!=0){ b[d+1]=a[d]+a[d+1]; if(b[d+1]!=0)cout<<b[d+1]<<"  "; }
     if((c+1)%2==0){ a[d+1]=b[d]+b[d+1]; if(a[d+1]!=0)cout<<a[d+1]<<"  "; }
	}
	cout<<endl;
}
	return 0;
}
