#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,aa=5,aaa;
	int a[10]={0,2,4,6,8,10,12,14,16};
	for(b=0;b<10;b++){ 
	if(a[b]>=aa) break;}
	for(aaa=9;aaa>b;aaa--){
	a[aaa]=a[aaa-1];
	}
	a[b]=aa;
	for(b=0;b<10;b++){ 
	cout<<a[b]<<" ";
	}
	return 0;
}
