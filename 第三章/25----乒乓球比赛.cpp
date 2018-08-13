#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[3],b[3],c,d,e,f;
	char a_[3]={'A','B','C'};
	char b_[3]={'X','Y','Z'};
	for(c=2;c>=0;c--){
	a[(c+1)%3]=1; //a[0]=1; a[2]=1; a[1]=1;
	a[(c+2)%3]=2; //a[1]=2; a[0]=2; a[2]=2;
	a[(c+3)%3]=3; //a[2]=3; a[1]=3; a[0]=3;	
	for(d=2;d>=0;d--){
	b[(d+1)%3]=1; //b[0]=1; b[2]=1; b[1]=1;
	b[(d+2)%3]=2; //b[1]=2; b[0]=2; b[2]=2;
	b[(d+3)%3]=3; //b[2]=3; b[1]=3; b[0]=3;
	if((a[0]!=b[0])&&(a[2]!=b[0])&&(a[2]!=b[2])) 
	{
	 for(e=1;e<=3;e++) { 
	 for(f=0;f<=2;f++)
	 if(a[f]==e) cout<<a_[f]<<'\t';
	 for(f=0;f<=2;f++)
	 if(b[f]==e) cout<<b_[f]<<endl;
	 }
	 cout<<endl;
	 break;
	 }
}
}
}
 
