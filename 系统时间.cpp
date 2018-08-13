#include<iostream>
#include<iomanip>
#include<time.h>
#include<windows.h>
using namespace std;
int main()
{
  int start; int second;
  while(1){
  SYSTEMTIME st={0};
  GetLocalTime(&st);
  system("cls");
  cout<<st.wYear<<"Äê"<<st.wMonth<<"ÔÂ"<<st.wDay<<"ÈÕ"<<endl;
  cout<<setfill('0')<<setw(2)<<st.wHour<<':'<<setfill('0')<<setw(2)<<st.wMinute<<':'<<setfill('0')<<setw(2)<<st.wSecond<<endl;
  second=st.wSecond;
  start=clock();
  while(clock()-start<=1000) if(second!=st.wSecond) break;   
}
}