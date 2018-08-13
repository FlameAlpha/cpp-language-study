#include<iostream>
using namespace std;
class student
{
	public:
		student(int n,float s):num(n),score(s){};
		void change(int n,float s) const {num=n;score=s;};
		void display() const {cout<<num<<" "<<score<<endl;}
	private:
		mutable int num;
		mutable float score;
};
int main()
{
	student stud(101,78.5);
	student * const p=&stud;
	p->display();
	p->change(101,80.5);
	p->display();
	return 0;
}