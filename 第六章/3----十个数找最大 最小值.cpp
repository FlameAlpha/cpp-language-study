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
int main()
{
    int a[10]={49,27,65,97,76,12,38,59,84,54};
    input(a);
    work(a);
    output(a);
	return 0;
} 

