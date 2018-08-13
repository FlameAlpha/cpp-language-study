#include<iostream>
using namespace std;
class date;
class time
{
	public:
		time(int,int,int);
		friend date;
	private:
		int hour;
		int minute;
		int second; 
};
class date
{
    public:
    	date(int,int,int);
    	void display(time &);
    private:
    	int month;
    	int day;
    	int year;
};
time::time(int h,int m,int s):hour(h),minute(m),second(s){};
date::date(int m,int d,int y):month(m),day(d),year(y){};
void date::display(time &t)
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.second<<endl;
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
int main()
{
	time t1(12,12,12);
	date d1(12,12,2015);
	d1.display(t1);
	return 0;
}