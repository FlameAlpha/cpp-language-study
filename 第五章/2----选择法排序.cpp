#include<iostream>
#include<string> 
using namespace std;
int main()
{
    int a[10]={49,27,65,97,76,12,38,59,84,54};
    int b,c,a_;
    for(b=9;b>=0;b--)
    for(c=0;c<=b;c++)
    if(a[9-b]<a[9-b+c]) { a_=a[9-b]; a[9-b]=a[9-b+c]; a[9-b+c]=a_; } 
    for(b=9;b>=0;b--) cout<<a[b]<<"\t";
	return 0;
} 
