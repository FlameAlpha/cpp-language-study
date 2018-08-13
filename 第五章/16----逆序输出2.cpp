#include<iostream>
#include<string>
using namespace std;
int main()
{
	int b=0; string aa;
	while((aa[b]=getchar())!='\n'){ b++; }
	b=b-1;
	while(b+1) {cout<<aa[b]; b--;}
	return 0;
}

