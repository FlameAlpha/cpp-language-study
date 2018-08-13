#include<iostream>
#include<fstream>
#include<cstring>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
class doc
{
private:
  char *str;  
  int length; 
public:
  doc(char *filename);
  void reverse(); 
  ~doc();
  void writeToFile(char *filename);
  void output()
  { cout<<str; }
};

doc::doc(char *filename)
{
  ifstream inFile(filename);
  int len=1001;char tmp;
  str=new char[len];
  length=0;
  while((tmp=inFile.get())!=EOF)
  {
	  str[length++]=tmp;
  }
  str[length]='\0';
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
}

void doc::writeToFile(char *filename)
{
  ofstream outFile(filename);
  outFile<<str;
  outFile.close();
}

int main()
{
  doc myDoc("in.txt");
  myDoc.reverse();
  myDoc.writeToFile("out.doc");
  while(!kbhit()); 
  return 0;
}

