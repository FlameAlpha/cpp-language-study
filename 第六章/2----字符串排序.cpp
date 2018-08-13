#include<iostream>
#include<string> 
using namespace std;
int main()
{
    string str[10],a_,*p;
    p=str;
    int b,c;
	for(b=9;b>=0;b--)
	{
		cin>>*(p+b);
	}
    for(b=9;b>=0;b--)
    for(c=0;c<=b;c++)
    if(*(p+9-b)<*(p+9-b+c)) { a_=*(p+9-b); *(p+9-b)=*(p+9-b+c); *(p+9-b+c)=a_; } 
    for(b=9;b>=0;b--) { cout<<*(p+b)<<"\t"; }
	return 0;
} 