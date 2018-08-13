#include<iostream>
using namespace std;
class store
{
	public:
		store(int n,int s):N(n),S(s){}
		void total()
		{
			n=n+N;
            if(N>=10) S=S*0.98;
            sum=sum+S*N;
		}
		static float average();
		static void display();
	private:
		int N;
		float S;
		static float discount;
		static float sum;
		static int n;
};
int store::n=0;
float store::sum=0;
float store::average()
{		
return sum/n;
}
void store::display()
{
cout<<"总售价:"<<sum<<endl<<"平均售价:"<<average(); 
}
int main()
{
	store n_101(5,23.8),n_102(12,24.56),n_103(100,21.5);
	n_101.total();
	n_102.total();
	n_103.total();
	store::display();
	return 0;
}