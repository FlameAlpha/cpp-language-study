#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,flag;
    while(1){
	cout<<"请输入数字：";
	cin>>a;
	flag=1;
		for(b=2;b<=sqrt(a);b++)
		{
		   if(a%b==0){
		   flag=0;
		   break;
		   }       
		}
		if(flag==1) cout<<a<<"是素数"; 
		else cout<<a<<"不是素数";
		cout<<endl;
}
	return 0;
}  
