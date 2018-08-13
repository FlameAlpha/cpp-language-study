#include<iostream>
#include<string> 
using namespace std;
void input(int *a){
int n;
for(n=0;n<10;n++) cin>>*(a+n);
}
void output(int *a){
int n;
for(n=0;n<10;n++) cout<<*(a+n)<<'\t';
}
void work(int *a)
{
int n,m,i,bb[10]={0},aa[10]={0};
for(n=0;n<10;n++)
for(m=0;m<10;m++)
{
if(*(a+n)<=*(a+m)) 
aa[n]++;
if(*(a+n)==*(a+m))
bb[n]++;
}
for(n=0;n<10;n++){
if(aa[n]==10){ i=*a; *a=*(a+n); *(a+n)=i;}
if((aa[n]-bb[n])==0){ i=*(a+9); *(a+9)=*(a+n); *(a+n)=i;}
}
}
int number(int n)
{
	int a[n],m=0,i=0,j=0,*p;
	p=a;
	for(m=0;m<n;m++){
	*(p+m)=m+1; 
	if(*(p+m)%3==0) 
	*(p+m)=0; 
	//cout<<m+1<<'\t';
	}
	//cout<<endl;
	i=n+1; 
	while(1){
	for(m=0;m<n;m++){
	 if(*(p+m)!=0){ 
	 //cout<<m+1<<'\t';
	 if(*(p+m)==(i-1)) break;
	 *(p+m)=i; 
	 i++;
	 if(*(p+m)%3==0) 
	 *(p+m)=0;
     }
	 }
	// cout<<endl;
	if(*(p+m)==(i-1)) break;
}
return (m+1);
}
int main()
{
    int a[10]={49,27,65,97,76,12,38,59,84,54};
   // input(a);
   // work(a);
   // output(a);
   int n;
   while(1){
   cin>>n;
   cout<<number(n)<<endl;
}
	return 0;
} 
