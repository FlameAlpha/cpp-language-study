#include<iostream>
using namespace std;
class V
{
	private:
		float height;
		float width;
		float length;
	public:
		void value()
		{
			cout<<"请输入长宽高："<<endl;
			cin>>length>>width>>height;
			cout<<"长方体体积为："<<length*width*height<<endl; 
		}
		void print()
		{
			cout<<length<<'\t'<<width<<'\t'<<height<<endl;
		}
};
int main()
{
	V v1,v3;
	v1.value();
	V v2(v1);
	v2.print();
	v3=v2;
	v3.print();
return 0;	
}