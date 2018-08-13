#include<iostream>
#include<cmath>
using namespace std;
class point{	
  public:
  int X;
  int Y;
  int value;
};
class Array 
{
	private:
		point array[20][20];
		int line;
		int row;
	public:
		Array(){}
		Array(int a,int l,int r):line(l-1),row(r-1){
		int x,y;
		for(x=0;x<r;x++)
		for(y=0;y<l;y++)
		array[x][y].value=a;
	    }
		friend Array operator + (Array&,Array&);
		friend Array operator - (Array&,Array&);
		friend istream&operator >> (istream&,Array&);
		friend ostream&operator << (ostream&,Array&);
};
Array operator + (Array&arr_1,Array&arr_2)
{
	int x,y; Array arr_3;
	for(y=0;y<=arr_1.line;y++)
	for(x=0;x<=arr_1.row;x++){
	arr_3.array[x][y].value=arr_1.array[x][y].value+arr_2.array[x][y].value;
    }
    arr_3.line=arr_1.line;
    arr_3.row=arr_1.row;
    return arr_3; 
}
Array operator - (Array&arr_1,Array&arr_2)
{
	int x,y; Array arr_3;
	for(y=0;y<=arr_1.line;y++)
	for(x=0;x<=arr_1.row;x++){
	arr_3.array[x][y].value=arr_1.array[x][y].value-arr_2.array[x][y].value;
    }
    arr_3.line=arr_1.line;
    arr_3.row=arr_1.row;
    return arr_3; 
}
istream &operator >> (istream & input,Array & arr)
{
	int a,b,c=0,d; int x,y;
	char number,num[5];
	for(y=0;;y++){
	if(input.peek()=='\n') break;
	for(x=0;;x++){
    do
	{
	number=getchar();
	}while((number==' ')||(number=='\n'));
	num[0]=number;
	for(a=1;;a++)
	{
	num[a]=getchar();
    if((num[a]==' ')||(num[a]=='\n')) break;
	}	
	arr.array[x][y].value=0;
	for(b=a-1;b>=0;b--){
		arr.array[x][y].value+=((int)num[b]-48)*pow(10,a-1-b);
	}
	arr.array[x][y].X=x;
	arr.array[x][y].Y=y;
	if(num[a]=='\n') break;
}
}
arr.line=y-1;
arr.row=x;
return input;
}
ostream&operator << (ostream&output,Array&arr)
{
	int x,y;
	for(y=0;y<=arr.line;y++){
	for(x=0;x<=arr.row;x++)
	output<<arr.array[x][y].value<<'\t';
	output<<endl;
    }
    return output;
}
int main()
{	
    Array array_1(2,3,4),array_2(20,3,4),array_3;
    array_3=array_1+array_2;
    cout<<array_3<<endl;
    array_3=array_1-array_2;
    cout<<array_3<<endl;
    cin>>array_3;
    cout<<array_3;
    return 0;
}