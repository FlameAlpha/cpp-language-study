#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	while(1){
	cout<<"设一元二次方程为:ax^2+bx+c=0"<<endl<<"请输入 a,b,c:";
	cin>>a>>b>>c;
	if((pow(b,2)-4*a*c)>0){
	cout<<"X1="<<0.5*(-b+sqrt(pow(b,2)-4*a*c))/a;
    cout<<"X2="<<0.5*(-b-sqrt(pow(b,2)-4*a*c))/a;
    }
    else if((pow(b,2)-4*a*c)==0) cout<<"X1=X2="<<-0.5*b/a;
    else cout<<"无根";
	cout<<endl; 
}
	return 0;
}  
