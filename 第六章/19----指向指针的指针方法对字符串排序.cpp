#include<iostream>
#include<string> 
using namespace std;
int main()
{
    char *str[6]={"BASIC","FORTRAN","C++","Pascal","COBOL","         "};
	char * *p,a[10];
	int i,j,n,b=5;
    p=str;
    for(i=0;i<b;i++)
	{
		for(n=i+1;n<b;n++){
	    j=0;
		if(*(*(p+i)+j)>*(*(p+n)+j)) { *(p+5)=*(p+n); *(p+n)=*(p+i); *(p+i)=*(p+5); }
		while(*(*(p+i)+j)==*(*(p+n)+j))
		{ j++;
		  if(*(*(p+i)+j)>*(*(p+n)+j)){ *(p+5)=*(p+n); *(p+n)=*(p+i); *(p+i)=*(p+5); }
		  if((*(*(p+i)+j)=='\0')||(*(*(p+n)+j)=='/0')) break;
		}
	    }
	}
	for(n=0;n<5;n++)
    cout<<*(p+n)<<endl;
 	return 0;
} 

