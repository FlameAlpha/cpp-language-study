#include<iostream>
using namespace std;
struct str
{
	int a;
	char b;
	str *c;
}d[5],*head,*p;
int main()
{
	d[0].a=0; d[0].b='0';
	d[1].a=1; d[1].b='1';
	d[2].a=2; d[2].b='2';
	d[3].a=3; d[3].b='3';
	d[4].a=4; d[4].b='4';
	p=&d[0];
	d[0].c=&d[1];
	d[1].c=&d[2];
	d[2].c=&d[3];
	d[3].c=&d[4];
	d[4].c=NULL;
	do
	{
		cout<<p->a<<"\t"<<p->b<<endl;
		p=p->c;
	}while(p!=NULL);
	return 0;
}