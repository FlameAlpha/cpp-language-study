#include<iostream>
using namespace std;
class date
{
	public:
		date(int m,int d,int y);
		date(int m,int d);
		date(int m);
		date();
		void display();
	private:
		int month;
		int day;
		int year;
} ;
date::date(int m,int d,int y):month(m),day(d),year(y)
{}
date::date(int m,int d):month(m),day(d)
{year=2005;}
date::date(int m):month(m)
{
	day=1;
	year=2005;
}
date::date()
{
	month=1;
	day=1;
	year=2005;
}
void date::display()
{
	cout<<month<<'/'<<day<<'/'<<year<<endl;
}
int main()
{
	date d1(10,13,2005);
	date d2(12,30);
	date d3(10);
	date d4;
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	return 0;
}