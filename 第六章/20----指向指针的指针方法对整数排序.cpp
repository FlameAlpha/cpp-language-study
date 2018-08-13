#include<iostream>
#include<string> 
using namespace std;
void pai(char **str)
{
	char **p,a[10];
	int i,j,n,b=12;
    p=str;
    for(i=0;i<b;i++)
	{
		for(n=i+1;n<b;n++){
	    j=0;
		if(*(*(p+i)+j)>*(*(p+n)+j)) { *(p+b)=*(p+n); *(p+n)=*(p+i); *(p+i)=*(p+b); }
		while(*(*(p+i)+j)==*(*(p+n)+j))
		{ j++;
		  if(*(*(p+i)+j)>*(*(p+n)+j)){ *(p+b)=*(p+n); *(p+n)=*(p+i); *(p+i)=*(p+b); }
		  if((*(*(p+i)+j)=='\0')||(*(*(p+n)+j)=='/0')) break;
		}
	    }
	}
}
int main()
{
    char *str[]={"15","20","59","57","84","53","15","26","48","53","95","07","000"};
    pai(str);
    char **p,a[10];
	int i,j,n,b=12;
    p=str;
	for(n=0;n<b;n++)
    cout<<*(p+n)<<endl;
 	return 0;
} 

