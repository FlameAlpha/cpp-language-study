#include<iostream>
#include<cmath>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{ 
char a;int c[4]={0,0,0,0};
while((a=getchar())!='\n')
{
	if(('A'<=a&&a<='Z')||('a'<=a&&a<='z'))  c[0]++;
	else{
	if('0'<=a&&a<='9')  c[1]++;
	else{
		if(a==' ')  c[2]++;
		else c[3]++;
	}
}
}
cout<<"英文字母："<<c[0]<<endl<<"数字："<<c[1]<<endl<<"空格："<<c[2]<<endl<<"其他："<<c[3]; 
return 0;
} 
