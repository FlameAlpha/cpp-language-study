#include<iostream>
#include<cstring>
using namespace std;
class  Student
{
	public:
		void getvalue()
		{
			cin>>num>>name>>sex;
		}
		void display()
		{
			cout<<"num:"<<num<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl;
		}
	private:
		int num;
		string name;
		char sex;
};
class Student_1:private Student//protected Student//public Student
{
	public:
		void getvalue_1()
		{
			getvalue();
			cin>>age>>addr;
		}
		void display_1()
		{
			display();
			cout<<"age:"<<age<<endl;
			cout<<"address:"<<addr<<endl;
		}
	private:
		int age;
		string addr;
};
int main()
{
	Student_1 stu;
	stu.getvalue_1();
	stu.display_1();
	return 0;
}