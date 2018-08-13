#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b,aa=0;
	int a[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
	for(b=0;b<=2;b++) aa=aa+a[b][b];
	for(b=0;b<=2;b++) aa=aa+a[b][2-b];
	cout<<aa-a[1][1];
	return 0;
}
