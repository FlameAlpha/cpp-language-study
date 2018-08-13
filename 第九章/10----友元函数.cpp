#include<iostream>
using namespace std;
class date;
class time
{
	public:
		time(int,int,int);
		friend void display(time &,date &);
	private:
		int hour;
		int minute;
		int second; 
};
class date
{
    public:
    	date(int,int,int);
    	friend void display(time &,date &);
    private:
    	int month;
    	int day;
    	int year;
};
time::time(int h,int m,int s):hour(h),minute(m),second(s){};
date::date(int m,int d,int y):month(m),day(d),year(y){};
void display(time &t,date &d)
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
	cout<<d.year<<"-"<<d.month<<"-"<<d.day<<endl;
}
int main()
{
	time t1(12,12,12);
	date d1(12,12,2015);
	display(t1,d1);
	return 0;
}