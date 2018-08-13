#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c=0,d[168],e=0,f[5],flag;
	d[0]=1;
	cout<<"以下为素数："<<endl; 
	cout<<d[0]; 
	for(a=2;a<=1000;a++){
		flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1){ c++; d[c]=a; cout<<"\t"<<d[c]; }
	}
	c=0;
	cout<<endl<<"以下为完数："<<endl;
	for(a=1;a<=1000;a++)
	{
	for(b=0;b<168;b++)
	{
	if(a<d[b]) break;
	if(a%d[b]==0) { e=e+d[b]; f[c]=d[b]; c++;/*cout<<d[b]<<'\t';*/ }
	}
	if(a==e){ cout<<a<<",its factors are ";
	for(flag=0;flag<c;flag++) { cout<<f[flag]; if(flag!=(c-1)) cout<<","; }
	cout<<endl;}
	c=0;
	e=0;
	}
} 
