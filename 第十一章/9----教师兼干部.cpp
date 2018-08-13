#include<iostream>
#include<cstring>
using namespace std;
class Teacher
{
	public:
		Teacher(string n,int ag,char s,string ad,string te,string ti):name(n),age(ag),sex(s),tel(te),addr(ad),title(ti){}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"tel:"<<tel<<endl;
			cout<<"address:"<<addr<<endl;
		}
		string name;
		int age;
		char sex;
		string addr;
		string tel;
		string title;
};
class Cadre
{
    public:
		Cadre(string n,int ag,char s,string ad,string te,string p):name(n),age(ag),sex(s),tel(te),addr(ad),post(p){}   
		string name;
		int age;
		char sex;
		string addr;
		string tel;
		string post;
};
class Teacher_Cadre:public Teacher,public Cadre
{
	public:
	Teacher_Cadre(string n,int ag,char s,string ad,string te,string p,string ti,int w):Cadre(n,ag,s,ad,te,p),Teacher(n,ag,s,ad,te,ti),wages(w){}
	void show()
	{
		display();
		cout<<"post:"<<Cadre::post<<endl<<"wages:"<<wages;
	}
	private:
		int wages;
};
int main()
{
	Teacher_Cadre T_C("魏士杰",23,'b',"武安","18716000583","团支书","教授",456);
	T_C.show();
	return 0;
}