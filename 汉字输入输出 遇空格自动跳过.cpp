#include <iostream>
#include <iomanip>
using namespace std;
class student
{
	private:
		unsigned char num[9];
		unsigned char  score[12];
		int n;
		int m;
	public:
		student()
		{
	       n=8;
		   m=11;
		}
		void setdata()
		{
			int a;
			unsigned char number;
			do
			{
				number=getchar();
			}while((number==' ')||(number=='\n'));
			num[n]=number;
			for(a=n-1;a>=0;a--)
			 {
			 	num[a]=getchar();
                if((num[a]==' ')||(num[a]=='\n')) break;
			 }
			do
			{
				number=getchar();
			}while((number==' ')||(number=='\n'));
			score[m]=number;
			for(a=m-1;a>=0;a--)
			 {
			 	score[a]=getchar();
                if((score[a]==' ')||(score[a]=='\n')) break;
			 }
			
		}	
		void display()
		{
			cout<<"name=";
			int a;
			 for(a=n;a>=0;a--)
			 {
				if(num[a]=='\n') break;
				if(num[a]==' ') break;
			 	cout<<num[a];
			 }
			 cout<<"  score=";
			  for(a=m;a>=0;a--)
			 {
				if(score[a]=='\n') break;
				if(score[a]==' ') break;
			 	cout<<score[a];
			 }
			cout<<endl;
		};
};
student stud[100];
int main()
{
	while(1){
	cout<<"ÊäÈëÐÕÃûÑ§ºÅ"<<endl;
	stud[1].setdata();
	stud[2].setdata();
	stud[1].display();
	stud[2].display();
	}
	return 0;
}