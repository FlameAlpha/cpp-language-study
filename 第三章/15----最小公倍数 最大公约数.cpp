#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int max(int *a,int *b)
{
	int c;
	if(*a<*b){ c=*a; *a=*b; *b=c;} 
	return *a;
}
int main()
{ 
int m,n,m_cup,n_cup,res;
while(1){
cin>>m>>n;
max(&m,&n);
if(m>0&&n>0)
{
	m_cup=m;
	n_cup=n;
	res=m_cup%n_cup;
	while(res!=0){ 	
	m_cup=n_cup;
	n_cup=res;
	res=m_cup%n_cup;
    }
	cout<<"最大公约数为："<<n_cup<<endl<<"最小公倍数为：  "<<m*n/n_cup<<endl;
	cout<<m<<"     "<<n; 
}
else cout<<"error";}
return 0;
    
} 
