#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string str[10][2];
	int score[10],a,_b,b_;
	for(a=9;a>=0;a--)
	for(_b=2;_b>=0;_b--){
	if(_b>=1)	cin>>str[a][_b-1];
	else cin>>score[a];
    }
    for(a=9;a>=0;a--)
	if(score[a]<60) 	
	for(b_=2;b_>=0;b_--){
	if(b_>=1)	cout<<str[a][b_-1]<<'\t';
	else cout<<score[a]<<endl;
    }
	return 0;
} 
