#include<iostream>
#include<string>
#include<time.h> 
#include<windows.h>
using namespace std;
int main()
{
	int _month[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
	int _day[13]={0,31,28,31,30,31,30,31,31,31,30,31};
	int _year[2]={365,366};
	int year,month,day,hour,minute,second,year_,month_,day_,a,start;
	system("title _                        ¼ÆÊ±Æ÷                                    _"); 	
	while(1){
	SYSTEMTIME st={0};
	GetLocalTime(&st);
	day_=26;	
	month_=1;
	year_=2015;
	year=st.wYear;
    month=st.wMonth;
    day=st.wDay;
    hour=st.wHour;
    minute=st.wMinute;
    second=st.wSecond;
    system("cls");
	if(year_%400==0) _day[2]=28;
	else _day[2]=29;
	for(month=month-1;month>=(month_-1);month--) day=day+_day[month];
	for(a=year_;a<year;a++) 
	{
		if(a%400==0) day=day+_year[0];
		else day=day+_year[1];
	} 
	day=day-day_+1;
	hour=day*24+hour;
	minute=hour*60+minute;
	second=minute*60+second;
	cout<<"we are in love for "<<day<<" days"<<endl;
	cout<<"we are in love for "<<hour<<" hour"<<endl;
	cout<<"we are in love for "<<minute<<" minutes"<<endl;
	cout<<"we are in love for "<<second<<" seconds"<<endl;
	start=clock();
    while(clock()-start<=1000); 
	}
	return 0;
}
