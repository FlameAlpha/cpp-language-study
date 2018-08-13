#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		student(int nu,string na,string se):num(nu),name(na),sex(se){};
		void display();
		void set_value();
	private:
		int num;
		string name;
		string sex;
};
class pupil:private student
{
	public:
		pupil(int nu,string na,string se,int ag,string ad):student(nu,na,se),age(ag),address(ad){};
		void p_display();
		void p_set_value();
	private:
		int age;
		string address;
};
