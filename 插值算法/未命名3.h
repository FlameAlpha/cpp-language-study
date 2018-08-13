#include<iostream>
#include<fstream>
using namespace std;
class doc
{
private:
  char *str; 
  float *numx; 
  float *numy;
  
  int length; 
  int lenx;
  int leny;
public:
  doc(char *filename);
  void reverse(); 
  ~doc();
  void writeToFile(char *filename);
  void output()
  { cout<<str; }
  friend void equal(float x[],float y[],doc &d);
};
void equal(float x[],float y[],doc &d)
{
	for(int i;i<d.lenx;i++){
	x[i]=*d.numx;
	y[i]=*d.numy;
	d.numx++;
	d.numy++;
	}
}
doc::doc(char *filename)
{
  ifstream inFile(filename);
  int len=1001;int tmp;
  numx=new float[len];
  numy=new float[len];
  length=0;
  while((tmp=inFile.get())!=EOF)
  {
  	if(length%2==0)
	  {numx[lenx++]=tmp; length++;}
    else 
      {numy[leny++]=tmp; length++;}
  }
  inFile.close();
}

void doc::reverse(){
char temp; int i;
for(i=length-1;i>=length/2;i--){
temp=str[i]; 
str[i]=str[length-1-i];
str[length-1-i]=temp;
}
}

doc::~doc()
{
  delete [] str;
  delete [] numx;
  delete [] numy;
}

void doc::writeToFile(char *filename)
{
  ofstream outFile(filename);
  outFile<<str;
  outFile.close();
}
