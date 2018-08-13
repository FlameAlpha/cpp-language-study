#include<iostream>
#include<cstring>
using namespace std;
class Teacher
{
 public:
 	int num;
    string name;
    string sex;
    Teacher(int nu,string na,string s):num(nu),name(na),sex(s){};
    void display()
	{
		cout<<"num:"<<num<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"sex:"<<sex<<endl;
	}
 private:
	
};
class Student:private Teacher 
{
	public:
	Student(int nu,string na,string s):Teacher(nu,na,s){}
};
int main()
{
	Student stu(12,"ÎºÊ¿½Ü","ÄÐ");
	stu.display();
	return 0;
}