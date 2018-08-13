#include<iostream>
#include<cmath>
using namespace std;
int d[168];
int prime(int a)
{
	int flag,b;
	flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1) return 1;
		else return 0;
}
int godbah(int a)
{
	int n,m,flag=0;
	if((a>=6)&&(a%2==0))
	{
		for(n=1;n<168;n++){
		for(m=1;m<168;m++)
		{
			if(a==(d[n]+d[m])){ flag=1; break;}
		}
		if(flag==1) break;
	}
	}
	if(flag==1)
	cout<<a<<'='<<d[n]<<'+'<<d[m]<<endl;
	else cout<<"error"<<endl;
	return flag; 
}
int main()
{
	int a,b,c=0,flag;
	d[0]=1;
	for(a=2;a<=1000;a++){
		flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1){ c++; d[c]=a; cout<<d[c]<<'\t'; }
	}
	cout<<endl;
	while(1){
	cout<<"ÇëÊäÈëÊý×Ö:";
	cin>>a; 
	godbah(a);
	} 
}
