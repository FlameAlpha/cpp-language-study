#include<iostream>
#include<string>
using namespace std;
int main()
{
	int b[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
	int a[13]={0,31,28,31,30,31,30,31,31,31,30,31};
	int year,month,day,day_;
	while(1){
	day_=0;	
	cout<<"输入年-月-日：";
	cin>>year>>month>>day;
	if(year%400==0) a[2]=28;
	else a[2]=29;
	for(month-=1;month>0;month--) day_+=a[month];
	day=day+day_;
	cout<<day<<endl;
	}
	return 0;
}

