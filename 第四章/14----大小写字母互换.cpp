#include<iostream>
#include<cmath>
using namespace std;
int main()
{
char a;
while(1){
cin>>a;
#if (a<='z')&&(a>='a') 
a=a-32;
cout<<a<<endl;
#else 
a=a+32;
cout<<a<<endl;
#endif 
}
return 0;
}
