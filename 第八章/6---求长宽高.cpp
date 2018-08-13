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
			cout<<"长方体体积为："<<length*width*height; 
		}
};
int main()
{
	V v;
	v.value();
return 0;	
}
