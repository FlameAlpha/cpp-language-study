#include<iostream>
using namespace std; 
typedef struct data
{
 float x;
 float y;
}Data;//变量x和函数值y的结构
Data d[20];//最多二十组数据
float f(int s,int t)//牛顿插值法，用以返回插商
{
 if(t==s+1)
  return (d[t].y-d[s].y)/(d[t].x-d[s].x);
 else
        return (f(s+1,t)-f(s,t-1))/(d[t].x-d[s].x);  
}
float Newton(float x,int count)
{
 int n;
 while(1)
 {
     cout<<"请输入n值(即n次插值):";//获得插值次数
  cin>>n;
  if(n<=count-1)// 插值次数不得大于count－1次
   break;
  else
   system("cls");
 }
//初始化t，y，yt。
 float t=1.0;
 float y=d[0].y;
 float yt=0.0;
//计算y值
 for(int j=1;j<=n;j++)
 {
  t=(x-d[j-1].x)*t;
  yt=f(0,j)*t;
  //cout<<f(0,j)<<endl;
  y=y+yt;
 }
 return y;
}
float lagrange(float x,int count)
{
 float y=0.0;
 for(int k=0;k<count;k++)//这儿默认为count－1次插值
 {
  float p=1.0;//初始化p
  for(int j=0;j<count;j++)
  {//计算p的值
   if(k==j)continue;//判断是否为同一个数
   p=p*(x-d[j].x)/(d[k].x-d[j].x);
  }
  y=y+p*d[k].y;//求和
 }
 return y;//返回y的值
}
int main()
{
 float x,y;
 int count;
 while(1)
 {
  cout<<"请输入x[i],y[i]的组数，不得超过20组:";//要求用户输入数据组数
  cin>>count;
  if(count<=20)
   break;//检查输入的是否合法
  system("cls");
 }
//获得各组数据
 for(int i=0;i<count;i++)
 {
      cout<<"请输入第"<<i+1<<"组x的值:";
      cin>>d[i].x;
      cout<<"请输入第"<<i+1<<"组y的值:";
      cin>>d[i].y;
   system("cls");
 }
 cout<<"请输入x的值:";//获得变量x的值
 cin>>x;
 while(1)
 {
  int choice=3;
  cout<<"请您选择使用哪种插值法计算："<<endl;
  cout<<"              (0):退出"<<endl;
  cout<<"              (1):Lagrange"<<endl;
  cout<<"              (2):Newton"<<endl;
  cout<<"输入你的选择：";
  cin>>choice;//取得用户的选择项
  if(choice==2)
  {
   cout<<"你选择了牛顿插值计算方法，其结果为：";
   y=Newton(x,count);break;//调用相应的处理函数
  }
        if(choice==1)
  {
   cout<<"你选择了拉格朗日插值计算方法，其结果为：";
   y=lagrange(x,count);break;//调用相应的处理函数
  }
  if(choice==0)
   break;
  system("cls");
  cout<<"输入错误!!!!"<<endl;
 }
 cout<<x<<"    ,        "<<y<<endl;//输出最终结果
    
}