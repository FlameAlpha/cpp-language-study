#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,aa[9],aaa;
	int a[9]={0,2,4, 6,8,10, 12,14,16};
	for(b=0;b<9;b++)  aa[b]=a[8-b];
	for(b=0;b<9;b++) {a[b]=aa[b]; cout<<a[b]<<"  ";}
	return 0;
}
