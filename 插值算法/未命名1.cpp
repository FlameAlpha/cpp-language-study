#include<iostream>
#include<cstdio>
#include<cmath>
#include"未命名3.h"
using namespace std;
double sumber;
float X_data[100];
float Y_data[100]; //最多100组数据
struct Data
{
 float x;
 float y;
}data;      //变量x和函数值y的结构
struct Data_array
{
	Data *d;  
	int length;
}Array;
float lagrange(float x,int count)
{
  double sum=0.0; 
  double product=1.0;
  Array.d=new Data[count];
  for(int i=0;i<count;i++)
  {	
	  Array.d[i].x=X_data[count];
	  Array.d[i].y=Y_data[count];
  }
  for(int i=0;i<count;i++){
  for(int j=0;j<count;j++)
  {
  	if(i==j) continue;
    product=product*(x-Array.d[j].x)/(Array.d[i].x-Array.d[j].x);       
  }
  product*=Array.d[i].y;
  sum=sum+product;
  product=1.0;
  }
  delete [] Array.d;
  return sum;
}
float f(float a,float b,float c,float d,float x)
{
float f;
f=((a*x+b)*x+c)*x+d;
return f;
}

float f1(float a,float b,float c,float x)
{
float f;
f=(x*3*a+2*b)*x+c;
return f;
}

float root(float a,float b,float c,float d)
{
float x0,x1=1;
do
{
x0=x1;
x1=x0-f(a,b,c,d,x0)/f1(a,b,c,x0);
}while(fabs(x1-x0)>=1e-6);
return x0;
}
int main()
{
   doc myDoc("in.txt");
   equal(X_data,Y_data,myDoc);
   ofstream outFile("out.txt");
   outFile<<X_data;
   outFile.close();
}
