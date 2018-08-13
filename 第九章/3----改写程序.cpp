#include<iostream>
using namespace std;
class date
{
	public:
		date(int =1,int =1,int =2005);
		void display();
	private:
		int month;
		int day;
		int year;
} ;
date::date(int m,int d,int y):month(m),day(d),year(y){};
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