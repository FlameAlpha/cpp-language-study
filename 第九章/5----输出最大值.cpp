#include<iostream>
using namespace std;
class student
{
	public:
		int number;
		int score;
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
student a[5]; 
student *max(student *m)
{
    int a;
    student *b;
    b=m;
	for(a=1;a<=4;a++) if((b+a)->score>=m->score) m=b+a;
    return m;     
}
int main()
{
	a[0].input(1,1);
	a[1].input(2,2);
	a[2].input(3,3);
	a[3].input(4,4);
	a[4].input(5,5);
	max(a)->display();
	return 0;
}
 