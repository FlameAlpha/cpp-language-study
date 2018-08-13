#include<iostream>
using namespace std;
class Time
{
	private:
		int hour;
		int minute;
		int sec;
	public:
		void scanf();
		void print();
};
int main()
{
Time t1;
t1.scanf();
t1.print();
return 0;	
}
void Time::scanf()
		{
			cin>>hour>>minute>>sec;
		}
void Time::print()
		{
			cout<<hour<<':'<<minute<<':'<<sec;
		}
