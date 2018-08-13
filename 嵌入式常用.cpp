#define NDEBUG           //禁止断言 
#include<iostream>
#include<cassert> 
using namespace std;

#define PTA 1
#define PTB 2
#define PTC 3

#define PT(X) PT##X      //合并变量名

#define str(X) #X        //转换字符串 
int main()
{
	assert(PT(A)>PT(B)); //断言 
	cout<<PT(A)<<endl;   //合并变量名 
	cout<<str(x);        //转换字符串 
}
