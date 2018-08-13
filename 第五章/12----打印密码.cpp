#include<iostream>
#include<cmath>
#define CHANGE 1
using namespace std;
int main()
{
char a;
while(1){
#if CHANGE
while((a=getchar())!='\n'){
if((a<='z')&&(a>='a'))
a='z'-(a-'a')%26;
if((a<='Z')&&(a>='A'))
a='Z'-(a-'A')%26;
cout<<a;}
#else 
while((a=getchar())!='\n'){
cout<<a;}
#endif 
cout<<endl;
}
return 0;
}

