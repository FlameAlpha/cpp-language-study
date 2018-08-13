#include<iostream>
#include<cmath>
using namespace std;
void move(int n,char a,char b,char c)
{
	if(n==1) cout<<'\t'<<a<<"->"<<c<<endl;
	else 
	{
		move(n-1,a,c,b);
		cout<<'\t'<<a<<"->"<<c<<endl;
		move(n-1,b,a,c);
	}
}
int main()
{
	int n;
	while(1){
	cout<<"请输入要移动的块数："; 
	cin>>n;
	move(n,'a','b','c'); 
	}
	return 0;
} 
