#include<iostream>
using namespace std;
class student
{
	private:
		int number;
		int score;
	public:
	void input(int a,int b)
	{
		number=a;
		score=b;
	} 
	void display()
	{
		cout<<number<<'\t'<<score<<endl;
    }
};
student a,b,c,d,f,*p;
int main()
{
	a.input(1,1);
	b.input(2,2);
	c.input(3,3);
	d.input(4,4);
	f.input(5,5);
	p=&a;
	p->display();
	(p+2)->display();
	(p+4)->display();
	return 0;
}
 