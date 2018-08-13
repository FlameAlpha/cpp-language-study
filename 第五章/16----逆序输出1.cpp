#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int b=0; char aa[100];
	while((aa[b]=getchar())!='\n'){ b++; }
	b=b-1;
	while(b+1) {cout<<aa[b]; b--;}
	return 0;
}

