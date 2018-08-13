#include<iostream>
using namespace std;
class student
{
	public:
		student(int n,float s):num(n),score(s){};
		void change(int n,float s) {num=n;score=s;};
		void display() {cout<<num<<" "<<score<<endl;}
	private:
		int num;
		float score;
};
void fun(student &d,int a,float b)
{
	d.change(a,b);
	d.display();
}
int main()
{
	student stud(101,78.5);
	stud.display();
	fun(stud,101,80.5);
	return 0;
}