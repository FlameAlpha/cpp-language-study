#include<iostream>
#include<cstring>
using namespace std;
class Teacher
{
	public:
		Teacher(int n,string na,char s):num(n),name(na),sex(s){}
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
class birthdate
{
	public:
		birthdate(){year=1996; month=7; day=8; };
		birthdate(int y,int m,int d):year(y),month(m),day(d){};
		void getvalue()
		{
			cin>>year>>month>>day;
		}
		int year;
		int month;
		int day;
};
class Professor:public Teacher
{
    public:
       Professor(int n,string na,char s,int y,int m,int d):Teacher(n,na,s){birthday.day=d; birthday.month=m; birthday.year=y;}
       void show()
       {
       	    display();
       	    cout<<"birthday:"<<birthday.year<<'/'<<birthday.month<<'/'<<birthday.day;
	   }
	   void birthday_value()
	   {
	   	    birthday.getvalue();
	   }
	private:
	   birthdate birthday;		
};
int main()
{
	Professor pro(1,"ÎºÊ¿½Ü",'b',1996,7,8);
	pro.birthday_value();
	pro.show();
	return 0;
}