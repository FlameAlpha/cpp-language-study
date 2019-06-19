# 练习题答案

## 第五章

### 5.1题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
#include <math.h>
int main()
 {int i,j,n,a[101];
  for (i=1;i<=100;i++)
    a[i]=i;
  a[1]=0;
  for (i=2;i<sqrt(100);i++)
    for (j=i+1;j<=100;j++)
       {if(a[i]!=0 && a[j]!=0)
	      if (a[j]%a[i]==0)
	       a[j]=0;  }
    cout<<endl;
    for (i=1,n=0;i<=100;i++)
     {if (a[i]!=0)
       {cout<<setw(5)<<a[i]<<" ";
        n++;}
      if(n==10)
        {cout<<endl;
   	     n=0;}
     }
	cout<<endl;
	return 0;
   }
```

### 5.2题

```cpp
#include <iostream>
using namespace std;
//#include <math.h>
int main()
  {int i,j,min,temp,a[11];
   cout<<"enter data:"<<endl;
   for (i=1;i<=10;i++)
   {cout<<"a["<<i<<"]=";
    cin>>a[i];                   //输入10个数
   }
   cout<<endl<<"The original numbers:"<<endl;;
   for (i=1;i<=10;i++)
     cout<<a[i]<<" ";           // 输出这10个数
   cout<<endl;;
   for (i=1;i<=9;i++)           //以下8行是对10个数排序
     {min=i;
      for (j=i+1;j<=10;j++)
        if (a[min]>a[j]) min=j;
         temp=a[i];             //以下3行将a[i+1]～a[10]中最小者与a[i] 对换
         a[i]=a[min];
         a[min]=temp;
      }
   cout<<endl<<"The sorted numbers:"<<endl;
   for (i=1;i<=10;i++)          // 输出已排好序的10个数
     cout<<a[i]<<" ";
   cout<<endl;
   return 0;
}
```

### 5.3题

```cpp
#include <iostream>
using namespace std;
int main()
 {int a[3][3],sum=0;
  int i,j;
  cout<<"enter data:"<<endl;;
   for (i=0;i<3;i++)
     for (j=0;j<3;j++)
       cin>>a[i][j];
   for (i=0;i<3;i++)
     sum=sum+a[i][i];
   cout<<"sum="<<sum<<endl;
   return 0;
  }
```

### 5.4题

```cpp
#include <iostream>
using namespace std;
int main()
 {int a[11]={1,4,6,9,13,16,19,28,40,100};
   int num,i,j;
   cout<<"array a:"<<endl;
   for (i=0;i<10;i++)
     cout<<a[i]<<" ";
   cout<<endl;;
   cout<<"insert data:";
   cin>>num;
   if (num>a[9])
     a[10]=num;
   else
    {for (i=0;i<10;i++)
     {if (a[i]>num)
       {for (j=9;j>=i;j--)
         a[j+1]=a[j];
        a[i]=num;
		break;
       }
      }
     }
  cout<<"Now, array a:"<<endl;
  for (i=0;i<11;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  return 0;
 }
```

### 5.5题

```cpp
#include <iostream>
using namespace std;
int main()
{ const int n=5;
  int a[n],i,temp;
  cout<<"enter array a:"<<endl;
  for (i=0;i<n;i++)
    cin>>a[i];
  cout<<"array a:"<<endl;
  for (i=0;i<n;i++)
   cout<<a[i]<<" ";
  for (i=0;i<n/2;i++)            //循环的作用是将对称的元素的值互换
    { temp=a[i];
      a[i]=a[n-i-1];
      a[n-i-1]=temp;
     }
  cout<<endl<<"Now,array a:"<<endl;
  for (i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}
```

### 5.6题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {const int n=11;
  int i,j,a[n][n];
  for (i=1;i<n;i++)
    {a[i][i]=1;
     a[i][1]=1;
    }
  for (i=3;i<n;i++)
    for (j=2;j<=i-1;j++)
       a[i][j]=a[i-1][j-1]+a[i-1][j];
  for (i=1;i<n;i++)
    {for (j=1;j<=i;j++)
       cout<<setw(5)<<a[i][j]<<" ";
     cout<<endl;
    }
  cout<<endl;
  return 0;
}
```

### 5.7题

```cpp
#include <iostream>
using namespace std;
int main()
{ const int n=4,m=5;        //假设数组为4行5列
  int i,j,a[n][m],max,maxj;
  bool flag;
  for (i=0;i<n;i++)         //输入数组
     for (j=0;j<m;j++)
      cin>>a[i][j];
  for (i=0;i<n;i++)
   {max=a[i][0]; maxj=0;
    for (j=0;j<m;j++)      //找出第i行中的最大数
	  if (a[i][j]>max)
	    {max=a[i][j];      //将本行的最大数存放在max中
	     maxj=j;           //将最大数所在的列号存放在maxj中
	    }
    flag=true;            //先假设是鞍点，以flag为真代表
    for (int k=0;k<n;k++)
	  if (max>a[k][maxj])  //将最大数和其同列元素相比
	     {flag=false;     //如果max不是同列最小，表示不是鞍点令flag1为
假
	      continue;}
    if(flag)             //如果flag1为真表示是鞍点
	{cout<<"a["<<i<<"]["<<"["<<maxj<<"]="<<max<<endl;
	                     //输出鞍点的值和所在行列号
	 break;
	}
  }
  if(!flag)	            //如果flag为假表示鞍点不存在
    cout<<"It does not exist!"<<endl;
   return 0;
  }
```

### 5.8题

```cpp
#include <iostream>
using namespace std;
int main()
{ const int n=7;
  int i,number,top,bott,mid,loca,a[n];
  bool flag=true,sign;
  char c;
  cout<<"enter data:"<<endl;;
  cin>>a[0];
  i=1;
  while(i<n)
   {cin>>a[i];
    if (a[i]>=a[i-1])
      i++;
    else
      cout<<"enter this data again:";
   }
  cout<<endl;
  for (i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
  while(flag)
    {cout<<"input number to look for:";
     cin>>number;
     sign=false;
     top=0;            //top是查找区间的起始位置
     bott=n-1;         //bott是查找区间的最末位置
     if ((number<a[0])||(number>a[n-1]))  //要查的数不在查找区间内
       loca=-1;        // 表示找不到
     while ((!sign) && (top<=bott))
       {mid=(bott+top)/2;
        if (number==a[mid])
         {loca=mid;
          cout<<"Find "<<number<<", its position is "<<loca+1<<endl;
		  sign=true;
         }
        else if (number<a[mid])
         bott=mid-1;
        else
        top=mid+1;
       }
     if(!sign||loca==-1)
       cout<<number<<" has not found."<<endl;;
     cout<<"continu or not(Y/N)?";
     cin>>c;
     if (c=='N'||c=='n')
	   flag=false;
    }
   return 0;
 }
```

### 5.9题

```cpp
#include <iostream>
using namespace std;
int main()
  {int sum_day(int,int);
   int leap(int year);
   int year,month,day,days=0;
   cout<<"input date(year,month,day):";
   cin>>year>>month>>day;
   cout<<year<<"/"<<month<<"/"<<day;
   days=sum_day(month,day);                                   /* 调用函数一
*/
   if(leap(year) && month>=3)                                 /* 调用函数二
*/
     days=days+1;
   cout<<" is the "<<days<<"th day in this year."<<endl;
   return 0;
   }


int sum_day(int month,int day)          //计算日期
  {int i;
   int day_tab[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   for (i=0;i<month-1;i++)
      day+=day_tab[i];
   return(day);
  }

int leap(int year)                     //判断是否为闰年
 {int leap;
  leap=year%4==0&&year%100!=0||year%400==0;
  return(leap);
 }
```

### 5.10题

```cpp
#include <iostream>
using namespace std;
int main()
{int i,j,upper,lower,digit,space,other;
 char text[3][80];
 upper=lower=digit=space=other=0;
 for (i=0;i<3;i++)
   {cout<<"please input line "<<i+1<<endl;
    gets(text[i]);
    for (j=0;j<80 && text[i][j]!='\0';j++)
      {if (text[i][j]>='A'&& text[i][j]<='Z')
         upper++;
       else if (text[i][j]>='a' && text[i][j]<='z')
         lower++;
       else if (text[i][j]>='0' && text[i][j]<='9')
         digit++;
       else if (text[i][j]==' ')
         space++;
       else
         other++;
     }
   }
   cout<<"upper case:"<<upper<<endl;
   cout<<"lower case:"<<lower<<endl;
   cout<<"digit     :"<<digit<<endl;
   cout<<"space     :"<<space<<endl;
   cout<<"other     :"<<other<<endl;
   return 0;
}
```

### 5.11题

```cpp
#include <iostream>
using namespace std;
int main()
{ char a[5]={'*','*','*','*','*'};
  int i,j,k;
  char space=' ';
  for (i=0;i<5;i++)              // 输出5行
   { cout<<endl;                 // 输出每行前先换行
     cout<<"    ";               // 每行前面留4个空格
     for (j=1;j<=i;j++)
       cout<<space;              // 每行再留一个空格
     for (k=0;k<5;k++)
       cout<<a[k];               // 每行输出5个*号
	}
  cout<<endl;
   return 0;
}
```

### 5.11题另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{ string stars="*****";
  int i,j;
  for (i=0;i<5;i++)              // 输出5行
   { cout<<"    ";               // 每行前面留4个空格
     for (j=1;j<=i;j++)
       cout<<" ";               // 每行再插入i个空格
     cout<<stars<<endl;         // 输出5个*号
  }
  return 0;
}
```

### 5.12题

```cpp
#include <iostream>
using namespace std;
int main()
 {int j,n;
  char ch[80],tran[80];
  cout<<"input cipher code:";
  gets(ch);
  cout<<"cipher code:"<<ch<<endl;
  j=0;
  while (ch[j]!='\0')
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      tran[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
      tran[j]=219-ch[j];
    else
      tran[j]=ch[j];
    j++;
  }
  n=j;
  cout<<"original text:";
  for (j=0;j<n;j++)
    putchar(tran[j]);
  cout<<endl;
  return 0;
 }
```

###	5.12题另一解

```cpp
#include <iostream>
using namespace std;
int main()
 {int j,n;
  char ch[80];
  cout<<"input cipher code:";
  gets(ch);
  cout<<"cipher code:"<<ch<<endl;
  j=0;
  while (ch[j]!='\0')
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      ch[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
      ch[j]=219-ch[j];
    else
      ch[j]=ch[j];
    j++;
  }
  n=j;
  cout<<"original text:";
  for (j=0;j<n;j++)
    putchar(ch[j]);
  cout<<endl;
  return 0;
 }
```

###	5.12另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
 {int j;
  string ch="I will visit China next week.",tran;
  tran=ch;
  cout<<"cipher code:"<<ch<<endl;
  j=0;
  while (j<=ch.size())
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      tran[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
	  tran[j]=219-ch[j];
    else
	  tran[j]=ch[j];
    j++;
  }
  cout<<"original text:";
  cout<<tran<<endl;
  return 0;
 }
```

###	5.12另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
 {int j;
  string ch="I will visit China next week.";
  cout<<"cipher code:"<<ch<<endl;
  j=0;
  while (j<=ch.size())
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      ch[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
	  ch[j]=219-ch[j];
    j++;
  }
  cout<<"original text:";
  cout<<ch<<endl;
  return 0;
 }
```

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
 {int j;
  string ch="I will visit China next week.";
  cout<<"cipher code:"<<ch<<endl;
  j=0;
  while (j<=ch.size())
  { if ((ch[j]>='A') && (ch[j]<='Z'))
      ch[j]=155-ch[j];
    else if ((ch[j]>='a') && (ch[j]<='z'))
	  ch[j]=219-ch[j];
    j++;
  }
  cout<<"original text:";
  cout<<ch<<endl;
  return 0;
 }
```

###	5.13题

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{char s1[80],s2[40];
  int i=0,j=0;
  cout<<"input string1:";
  cin>>s1;
  cout<<"input string2:";
  cin>>s2;
  while (s1[i]!='\0')
    i++;
  while(s2[j]!='\0')
    s1[i++]=s2[j++];
  s1[i]='\0';
  cout<<"The new string is:"<<s1<<endl;
  return 0;
}
```

### 5.13另一解

```cpp
#include <iostream>
using namespace std;
int main()
{char s1[80],s2[40];
  cout<<"input string1:";
  cin>>s1;
  cout<<"input string2:";
  cin>>s2;
  strcat(s1,s2);
  cout<<"The new string is:"<<s1<<endl;
  return 0;
}
```

### 5.13另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{ string s1="week",s2="end";
  cout<<"s1="<<s1<<endl;
  cout<<"s2="<<s2<<endl;
  s1=s1+s2;
  cout<<"The new string is:"<<s1<<endl;
  return 0;
}
```

### 5.14题

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{ const int n=5;
  int i,j;
  string str[n],temp;
  cout<<"please input strings:"<<endl;
  for(i=0;i<n;i++)
	  cin>>str[i];
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
      if(str[j]>str[j+1])
	  {temp=str[j];str[j]=str[j+1];str[j+1]=temp;}
  cout<<endl<<"sorted strings:"<<endl;
  for(i=0;i<n;i++)
	  cout<<str[i]<<endl;
  return 0;
}
```

### 5.15题

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{ const int n=5;
  string str;
  for(int i=0;i<n;i++)
     {cout<<"please input string:";
      cin>>str;
	  if(str[0]=='A')
		  cout<<str<<endl;}
  return 0;
}
```

### 5.16题

```cpp
#include <iostream>
using namespace std;
int main()
{ const n=10;
  int i;
  char a[n],temp;
  cout<<"please input a string:";
  for(i=0;i<n;i++)
	  cin>>a[i];
  for(i=0;i<n/2;i++)
  {temp=a[i];a[i]=a[n-i-1];a[n-i-1]=temp;}
  for(i=0;i<n;i++)
	  cout<<a[i];
  cout<<endl;
  return 0;
}
```

### 5.16题另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{ string a;
  int i,n;
  char temp;
  cout<<"please input a string:";
  cin>>a;
  n=a.size();
  for(i=0;i<n/2;i++)
  {temp=a[i];a[i]=a[n-i-1];a[n-i-1]=temp;}
  cout<<a<<endl;
  return 0;
}
```

### 5.17题

```cpp
#include <iostream>
#include <string>
using namespace std;
const int n=10;
string name[n];
int num[n],score[n];
int main()
{int i;
 void input_data();
 input_data();
 cout<<endl<<"The list of failed:"<<endl;
 for(i=0;i<n;i++)
   if(score[i]<60)
     cout<<name[i]<<" "<<num[i]<<"  "<<score[i]<<endl;
  return 0;
}

void input_data()
{int i;
 for (i=0;i<n;i++)
   {cout<<"input name,number and score of student "<<i+1<<":";
    cin>>name[i]>>num[i]>>score[i];}
}
```

## 第六章

### 6.1题

```cpp
#include <iostream>
#include <string>
using namespace std;
const int n=10;
string name[n];
int num[n],score[n];
int main()
{int i;
 void input_data();
 input_data();
 cout<<endl<<"The list of failed:"<<endl;
 for(i=0;i<n;i++)
   if(score[i]<60)
     cout<<name[i]<<" "<<num[i]<<"  "<<score[i]<<endl;
  return 0;
}

void input_data()
{int i;
 for (i=0;i<n;i++)
   {cout<<"input name,number and score of student "<<i+1<<":";
    cin>>name[i]>>num[i]>>score[i];}
}
```

### 6.2题

```cpp
#include <iostream>
#include <cstring>
using namespace std;
int main()
 {void swap(char *,char *);
  char str1[20],str2[20],str3[20];
  cout<<"input three line:"<<endl;
  gets(str1);
  gets(str2);
  gets(str3);
  if(strcmp(str1,str2)>0)  swap(str1,str2);
  if(strcmp(str1,str3)>0)  swap(str1,str3);
  if(strcmp(str2,str3)>0)  swap(str2,str3);
  cout<<endl<<"Now,the order is:"<<endl;
  cout<<str1<<endl<<str2<<endl<<str3<<endl;
  return 0;
 }
 void swap(char *p1,char *p2)          /* 交换两个字符串 */
 {char p[20];
  strcpy(p,p1);strcpy(p1,p2);strcpy(p2,p);
 }
```

### 6.2题另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
 {void change(string &,string &);
  string str1="                 ",
	     str2="                 ",
		 str3="                 ";
  char *p1=&str1[0],*p2=&str2[0],*p3=&str3[0];
  cout<<"input three line:"<<endl;
  gets(p1);
  gets(p2);
  gets(p3);
  if(str1>str2)change(str1,str2);
  if(str1>str3)change(str1,str3);
  if(str2>str3)change(str2,str3);
  cout<<endl<<"Now,the order is:"<<endl;
  cout<<str1<<endl<<str2<<endl<<str3<<endl;
  return 0;
 }
 void change(string &st1,string &st2)          /* 交换两个字符串 */
 {string st;
  st=st1;st1=st2;st2=st;
 }
```

### 6.3题

```cpp
#include <iostream>
using namespace std;
int main()
 { void input(int *number);
   void max_min_value(int *number);
   void output(int *number);
   int number[10];
   input(number);                           // 调用输入10个数的函数
   max_min_value(number);                   // 调用交换函数
   output(number);                          // 调用输出函数
   return 0;
}

 void input(int *number)                 // 输入10个数的函数
 {int i;
  cout<<"input 10 numbers:";
  for (i=0;i<10;i++)
    cin>>number[i];
  }

 void max_min_value(int *number)            // 交换函数
 { int *max,*min,*p,temp;
   max=min=number;
   for (p=number+1;p<number+10;p++)
     if (*p>*max) max=p;                 // 将大数地址赋给 max
     else if (*p<*min) min=p;            // 将小数地址赋给 min
     temp=number[0];number[0]=*min;*min=temp;  // 将最小数与第一数交
     temp=number[9];number[9]=*max;*max=temp;  // 将最小数与第一数交换
  }

void output(int *number)                  // 输出函数
  {int *p;
   cout<<"now,they are:    ";
   for (p=number;p<number+10;p++)
     cout<<*p<<" ";
   cout<<endl;
   return;
   }
### 6.4题

?```cpp
#include <iostream>
using namespace std;
int main()
 {void move(int *array,int n,int m);
  int number[20],n,m,i;
  cout<<"how many numbers?";               // 询问共有多少个数
  cin>>n;
  cout<<"input "<<n<<" numbers:"<<endl;    // 要求输入n个数
  for (i=0;i<n;i++)
    cin>>number[i];
  cout<<"how many places do you want move?";  // 询问后移多少个位置
  cin>>m;
  move(number,n,m);                       //调用move 函数
  cout<<"Now,they are:"<<endl;
  for (i=0;i<n;i++)
    cout<<number[i]<<" ";
  cout<<endl;
  return 0;
}

void move(int *array,int n,int m)             //使循环后移一次的函数
 {int *p,array_end;
  array_end=*(array+n-1);
  for (p=array+n-1;p>array;p--)
    *p=*(p-1);
  *array=array_end;
  m--;
  if (m>0) move(array,n,m); //递归调用,当循环次数m减至为0时,停止调用
 }
```

### 6.5题

```cpp
#include <iostream>
using namespace std;
int main()
 {int i,k,m,n,num[50],*p;
  cout<<"input number of person: n=";
  cin>>n;
  p=num;
  for (i=0;i<n;i++)
    *(p+i)=i+1;          // 以1至n为序给每个人编号
  i=0;                   // i为每次循环时计数变量
  k=0;                   // k为按1,2,3报数时的计数变量
  m=0;                   // m为退出人数
  while (m<n-1)          // 当退出人数比n-1少时(即未退出人数大于1时)执行循
环体
  {if (*(p+i)!=0)  k++;
   if (k==3)             // 将退出的人的编号置为0
     {*(p+i)=0;
      k=0;
      m++;
     }
   i++;
   if (i==n) i=0;        // 报数到尾后，i恢复为0
   }
  while(*p==0) p++;
  cout<<"The last one is NO."<<*p<<endl;
  return 0;
}
```

### 6.6题

```cpp
#include <iostream>
using namespace std;
int main()
 {int length(char *p);
  int len;
  char str[20];
  cout<<"input string:";
  cin>>str;
  len=length(str);
  cout<<"The length of string is "<<len<<endl;
  return 0;
}
int length(char *p)            //求字符串长度的函数
{int n;
 n=0;
 while (*p!='\0')
  {n++;
   p++;
  }
 return(n);
}
```

### 6.7题

```cpp
#include <iostream>
using namespace std;
int main()
 {void copystr(char *,char *,int);
  int m;
  char str1[20],str2[20];
  cout<<"input string:";
  gets(str1);
  cout<<"which character do you want begin to copy?";
  cin>>m;
  if (strlen(str1)<m)
    cout<<"input error!"<<endl;
  else
   {copystr(str1,str2,m);
    cout<<"result:"<<str2<<endl;
   }
  return 0;
}

void copystr(char *p1,char *p2,int m)      //字符串部分复制函数*/
{int n;
 n=0;
 while (n<m-1)
  {n++;
   p1++;
  }
 while (*p1!='\0')
   {*p2=*p1;
    p1++;
    p2++;
   }
 *p2='\0';
}
```

### 6.8题

```cpp
#include <iostream>
using namespace std;
int main()
{int upper=0,lower=0,digit=0,space=0,other=0,i=0;
char *p,s[20];
cout<<"input string:";
while ((s[i]=getchar())!='\n') i++;
p=&s[0];
while (*p!='\n')
  {if (('A'<=*p) && (*p<='Z'))
     ++upper;
   else if (('a'<=*p) && (*p<='z'))
     ++lower;
   else if (*p==' ')
     ++space;
   else if ((*p<='9') && (*p>='0'))
     ++digit;
   else
     ++other;
   p++;
  }
cout<<"upper case:"<<upper<<endl<<"lower case:"<<lower<<endl;
cout<<"space:"<<space<<endl<<"digit:"<<digit<<endl<<"other:"<<other<<endl;
return 0;
}
```

### 6.9题

```cpp
#include <iostream>
using namespace std;
int main()
{void move(int *);
 int a[3][3],*p,i;
 cout<<"input matrix:"<<endl;
 for (i=0;i<3;i++)
   cin>>a[i][0]>>a[i][1]>>a[i][2];
 p=&a[0][0];
 move(p);
 cout<<"Now,matrix:"<<endl;
 for (i=0;i<3;i++)
   cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
 cout<<endl;
 return 0;
}

 void move(int *pointer)
  {int i,j,t;
   for (i=0;i<3;i++)
     for (j=i;j<3;j++)
       {t=*(pointer+3*i+j);
        *(pointer+3*i+j)=*(pointer+3*j+i);
        *(pointer+3*j+i)=t;
	 }
 }
```

### 6.10题

```cpp
#include <iostream>
using namespace std;
int main()
{void change(int *p);
 int a[5][5],*p,i,j;
 cout<<"input matrix:"<<endl;
 for (i=0;i<5;i++)                       //输入矩阵
   for (j=0;j<5;j++)
     cin>>a[i][j];
 p=&a[0][0];                             //使p指向0行0列元素
 change(p);                              //调用函数，实现交换
 cout<<"Now,matrix:"<<endl;
 for (i=0;i<5;i++)                      //输出已交换的矩阵
  {for (j=0;j<5;j++)
     cout<<a[i][j]<<" ";
   cout<<endl;
  }
 return 0;
}

void change(int *p)                    //交换函数
 {int i,j,temp;
  int *pmax,*pmin;
  pmax=p;
  pmin=p;
  for (i=0;i<5;i++)      //找最大值和最小值的地址,并赋给 pmax,pmin
    for (j=i;j<5;j++)
     {if (*pmax<*(p+5*i+j)) pmax=p+5*i+j;
      if (*pmin>*(p+5*i+j)) pmin=p+5*i+j;
     }
  temp=*(p+12);              //将最大值与中心元素互换
  *(p+12)=*pmax;
  *pmax=temp;

  temp=*p;                  //将最小值与左上角元素互换
  *p=*pmin;
  *pmin=temp;

  pmin=p+1;
    //将a[0][1]的地址赋给pmin，从该位置开始找最小的元素
  for (i=0;i<5;i++)         //找第二最小值的地址赋给 pmin
    for (j=0;j<5;j++)
      if  (((p+5*i+j)!=p) && (*pmin > *(p+5*i+j))) pmin=p+5*i+j;
  temp=*pmin;              //将第二最小值与右上角元素互换
  *pmin=*(p+4);
  *(p+4)=temp;

  pmin=p+1;
  for (i=0;i<5;i++)       //找第三最小值的地址赋给pmin
    for (j=0;j<5;j++)
      if(((p+5*i+j)!=(p+4)) && ((p+5*i+j)!=p) &&(*pmin>*(p+5*i+j))) pmin=p
+5*i+j;
  temp=*pmin;            // 将第三最小值与左下角元素互换
  *pmin=*(p+20);
  *(p+20)=temp;

  pmin=p+1;
  for (i=0;i<5;i++)       // 找第四最小值的地址赋给pmin */
     for (j=0;j<5;j++)
       if (((p+5*i+j)!=p) &&((p+5*i+j)!=(p+4)) && ((p+5*i+j)!=(p+20)) &&
(*pmin>*(p+5*i+j)))
        	 pmin=p+5*i+j;
  temp=*pmin;             //将第四最小值与右下角元素互换
  *pmin=*(p+24);
  *(p+24)=temp;
  }
```

### 6.10题另一解

```cpp
#include <iostream>
using namespace std;
int main()
{void change(int *p);
 int a[5][5],*p,i,j;
 cout<<"input matrix:"<<endl;
 for (i=0;i<5;i++)                       //输入矩阵
   for (j=0;j<5;j++)
     cin>>a[i][j];
 p=&a[0][0];                             //使p指向0行0列元素
 change(p);                              //调用函数，实现交换
 cout<<"Now,matrix:"<<endl;
 for (i=0;i<5;i++)                      //输出已交换的矩阵
  {for (j=0;j<5;j++)
     cout<<a[i][j]<<" ";
   cout<<endl;
  }
 return 0;
}

void change(int *p)                    //交换函数
 {int i,j,temp;
  int *pmax,*pmin;
  pmax=p;
  pmin=p;
  for (i=0;i<5;i++)      //找最大值和最小值的地址,并赋给 pmax,pmin
    for (j=i;j<5;j++)
     {if (*pmax<*(p+5*i+j)) pmax=p+5*i+j;
      if (*pmin>*(p+5*i+j)) pmin=p+5*i+j;
     }
  temp=*(p+12);              //将最大值与中心元素互换
  *(p+12)=*pmax;
  *pmax=temp;

  temp=*p;                  //将最小值与左上角元素互换
  *p=*pmin;
  *pmin=temp;

  pmin=p+1;
    //将a[0][1]的地址赋给pmin，从该位置开始找最小的元素
  for (i=0;i<5;i++)         //找第二最小值的地址赋给 pmin
    for (j=0;j<5;j++)
	{if(i==0 && j==0) continue;
     if  (*pmin > *(p+5*i+j)) pmin=p+5*i+j;
	}
  temp=*pmin;              //将第二最小值与右上角元素互换
  *pmin=*(p+4);
  *(p+4)=temp;

  pmin=p+1;
  for (i=0;i<5;i++)       //找第三最小值的地址赋给pmin
    for (j=0;j<5;j++)
	{if((i==0  && j==0) ||(i==0  && j==4)) continue;
	 if(*pmin>*(p+5*i+j)) pmin=p+5*i+j;
	}
  temp=*pmin;            // 将第三最小值与左下角元素互换
  *pmin=*(p+20);
  *(p+20)=temp;

  pmin=p+1;
  for (i=0;i<5;i++)       // 找第四最小值的地址赋给pmin
     for (j=0;j<5;j++)
	 {if ((i==0  && j==0) ||(i==0  && j==4)||(i==4  && j==0)) continue;
	  if (*pmin>*(p+5*i+j)) pmin=p+5*i+j;
	 }
  temp=*pmin;             //将第四最小值与右下角元素互换
  *pmin=*(p+24);
  *(p+24)=temp;
  }
```

### 6.11题

```cpp
#include <iostream>
using namespace std;
int main()
{void sort(char s[][6]);
 int i;
 char str[10][6];
 cout<<"input 10 strings:"<<endl;
 for (i=0;i<10;i++)
   cin>>str[i];
 sort(str);
 cout<<"Now,the sequence is:"<<endl;
 for (i=0;i<10;i++)
   cout<<str[i]<<endl;
 return 0;
}

void sort(char s[][6])
{int i,j;
 char *p,temp[10];
 p=temp;
 for (i=0;i<9;i++)
   for (j=0;j<9-i;j++)
     if (strcmp(s[j],s[j+1])>0)
      {strcpy(p,s[j]);
       strcpy(s[j],s[+j+1]);
       strcpy(s[j+1],p);
      }
}
```

### 6.11题另一解

```cpp
#include <iostream>
using namespace std;
int main()
{void sort(char (*p)[6]);
 int i;
 char str[10][6];
 char (*p)[6];
 cout<<"input 10 strings:"<<endl;
 for (i=0;i<10;i++)
   cin>>str[i];
 p=str;
 sort(p);
 cout<<"Now,the sequence is:"<<endl;
 for (i=0;i<10;i++)
   cout<<str[i]<<endl;
 return 0;
}

void sort(char (*s)[6])
{int i,j;
 char temp[6],*t=temp;
 for (i=0;i<9;i++)
   for (j=0;j<9-i;j++)
     if (strcmp(s[j],s[j+1])>0)
      {strcpy(t,s[j]);
       strcpy(s[j],s[+j+1]);
       strcpy(s[j+1],t);
      }
}
```

### 6.11题另一解

```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{void sort(string *);
 int i;
 string str[10],*p=str;
 cout<<"input 10 strings:"<<endl;
 for (i=0;i<10;i++)
   cin>>str[i];
 sort(p);
 cout<<"Now,the sequence is:"<<endl;
 for (i=0;i<10;i++)
   cout<<str[i]<<endl;
 return 0;
}

void sort(string *s)
{int i,j;
 string temp;
 for (i=0;i<9;i++)
   for (j=0;j<9-i;j++)
     if (s[j]>s[j+1])
      {temp=s[j];
       s[j]=s[+j+1];
       s[j+1]=temp;
      }
}
```

### 6.12题

```cpp
#include <iostream>
using namespace std;
int main()
{void sort(char *[]);
 int i;
 char *p[10],str[10][20];
 for (i=0;i<10;i++)
   p[i]=str[i];        //将第i个字符串的首地址赋予指针数组p的第i个元素
 cout<<"input 10 strings:"<<endl;
 for (i=0;i<10;i++)
   cin>>p[i];
 sort(p);
 cout<<"Now,the sequence is:"<<endl;
 for (i=0;i<10;i++)
   cout<<p[i]<<endl;
 return 0;
}

void sort(char *s[])
{int i,j;
 char *temp;
 for (i=0;i<9;i++)
   for (j=0;j<9-i;j++)
     if (strcmp(*(s+j),*(s+j+1))>0)
       {temp=*(s+j);
        *(s+j)=*(s+j+1);
        *(s+j+1)=temp;
       }
}
```

### 6.13题

```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{float integral(float (*p)(float),float a,float b,int n);
 float a1,b1,a2,b2,a3,b3,c,(*p)(float);
 float fsin(float);               // 对fsin函数作声明
 float fcos(float);               // 对fcos函数作声明
 float fexp(float);               // 对fexp函数作声明
 int n=20;
 cout<<"input a1,b1:";           //输入求sin(x) 定积分的下限和上限
 cin>>a1>>b1;
 cout<<"input a2,b2:";         // 输入求cos(x) 定积分的下限和上限
 cin>>a2>>b2;
 cout<<"input a3,b3:";         // 输入求#include <iostream>
 cin>>a3>>b3;
 p=fsin;
 c=integral(p,a1,b1,n);           // 求出sin(x)的定积分
 cout<<"The integral of sin(x) is :"<<c<<endl;
 p=fcos;
 c=integral(p,a2,b2,n);           // 求出cos(x)的 定积分
 cout<<"The integral of cos(x) is :"<<c<<endl;;
 p=fexp;
 c=integral(p,a3,b3,n);           // 求出 的定积分
 cout<<"The integral of exp(x) is :"<<c<<endl;
 return 0;
}

float integral(float (*p)(float),float a,float b,int n)
           //用矩形法求定积分的通用函数
{int i;
 float x,h,s;
 h=(b-a)/n;
 x=a;
 s=0;
 for (i=1;i<=n;i++)
  {x=x+h;
   s=s+(*p)(x)*h;
  }
return(s);
}

float fsin(float x)                    // 计算sin(x) 的函数
{return sin(x);}

float fcos(float x)                    // 计算cos(x) 的函数
{return cos(x);}

float fexp(float x)                    // 计算exp(x)的函数
{return exp(x);}
```

### 6.13题

```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{float integral(float (*p)(float),float a,float b,int n);
 float a1,b1,a2,b2,a3,b3,c,(*p)(float);
 float fsin(float);               // 对fsin函数作声明
 float fcos(float);               // 对fcos函数作声明
 float fexp(float);               // 对fexp函数作声明
 int n=20;
 cout<<"input a1,b1:";           //输入求sin(x) 定积分的下限和上限
 cin>>a1>>b1;
 cout<<"input a2,b2:";         // 输入求cos(x) 定积分的下限和上限
 cin>>a2>>b2;
 cout<<"input a3,b3:";         // 输入求#include <iostream>
 cin>>a3>>b3;
 p=fsin;
 c=integral(p,a1,b1,n);           // 求出sin(x)的定积分
 cout<<"The integral of sin(x) is :"<<c<<endl;
 p=fcos;
 c=integral(p,a2,b2,n);           // 求出cos(x)的 定积分
 cout<<"The integral of cos(x) is :"<<c<<endl;;
 p=fexp;
 c=integral(p,a3,b3,n);           // 求出 的定积分
 cout<<"The integral of exp(x) is :"<<c<<endl;
 return 0;
}

float integral(float (*p)(float),float a,float b,int n)
           //用矩形法求定积分的通用函数
{int i;
 float x,h,s;
 h=(b-a)/n;
 x=a;
 s=0;
 for (i=1;i<=n;i++)
  {x=x+h;
   s=s+(*p)(x)*h;
  }
return(s);
}

float fsin(float x)                    // 计算sin(x) 的函数
{return sin(x);}

float fcos(float x)                    // 计算cos(x) 的函数
{return cos(x);}

float fexp(float x)                    // 计算exp(x)的函数
{return exp(x);}
```

### 6.14题

```cpp
#include <iostream>
using namespace std;
int main()
{ void sort (char *p,int m);
  int i,n;
  char *p,num[20];
  cout<<"input n:";
  cin>>n;
  cout<<"please input these numbers:"<<endl;
  for (i=0;i<n;i++)
   cin>>num[i];
  p=&num[0];
  sort(p,n);
  cout<<"Now,the sequence is:"<<endl;
  for (i=0;i<n;i++)
    cout<<num[i]<<" ";
  cout<<endl;
  return 0;
 }

 void sort (char *p,int m)              // 将n个数逆序排列函数
 {int i;
  char temp, *p1,*p2;
  for (i=0;i<m/2;i++)
  {p1=p+i;
   p2=p+(m-1-i);
   temp=*p1;
   *p1=*p2;
   *p2=temp;
  }
 }
```

### 6.15题

```cpp
#include <iostream>
using namespace std;
int main()
{void avsco(float *,float *);
 void avcour1(char (*)[10],float *);
 void fali2(char course[5][10],int num[],float *pscore,float aver[4]);
 void good(char course[5][10],int num[4],float *pscore,float aver[4]);
 int i,j,*pnum,num[4];
 float score[4][5],aver[4],*pscore,*paver;
 char course[5][10],(*pcourse)[10];
 cout<<"input course:"<<endl;
 pcourse=course;
 for (i=0;i<5;i++)
   cin>>course[i];
 cout<<"input NO. and scores:"<<endl;
 cout<<"NO.";
 for (i=0;i<5;i++)
   cout<<","<<course[i];
 cout<<endl;
 pscore=&score[0][0];
 pnum=&num[0];
 for (i=0;i<4;i++)
 {cin>>*(pnum+i);
  for (j=0;j<5;j++)
    cin>>*(pscore+5*i+j);
 }
 paver=&aver[0];
 cout<<endl<<endl;
 avsco(pscore,paver);                  // 求出每个学生的平均成绩
 avcour1(pcourse,pscore);                // 求出第一门课的平均成绩
 cout<<endl<<endl;
 fali2(pcourse,pnum,pscore,paver);       // 找出两门课不及格的学生
 cout<<endl<<endl;
 good(pcourse,pnum,pscore,paver);        // 找出成绩好的学生
 return 0;
}

void avsco(float *pscore,float *paver)  // 求每个学生的平均成绩的函数
 {int i,j;
  float sum,average;
  for (i=0;i<4;i++)
   {sum=0.0;
    for (j=0;j<5;j++)
      sum=sum+(*(pscore+5*i+j));       //累计每个学生的各科成绩
    average=sum/5;                   //计算平均成绩
    *(paver+i)=average;
   }
}

void avcour1(char (*pcourse)[10],float *pscore)      // 求第一课程的平均成
绩的函数
 {int i;
  float sum,average1;
  sum=0.0;
  for (i=0;i<4;i++)
    sum=sum+(*(pscore+5*i));               //累计每个学生的得分
  average1=sum/4;                        //计算平均成绩
  cout<<"course 1: "<<*pcourse<<",average score:"<<average1<<endl;
}

void fail2(char course[5][10],int num[],float *pscore,float aver[4])
           // 找两门以上课程不及格的学生的函数
 {int i,j,k,labe1;
  cout<<"   ==========Student who failed in two courses =======  "<<endl;
  cout<<"NO.   ";
  for (i=0;i<5;i++)
    cout<<course[i]<<"  ";
  cout<<"  average"<<endl;
  for (i=0;i<4;i++)
  {labe1=0;
   for (j=0;j<5;j++)
     if (*(pscore+5*i+j)<60.0) labe1++;
   if (labe1>=2)
    {cout<<num[i]<<"      ";
     for (k=0;k<5;k++)
       cout<<*(pscore+5*i+k)<<"      ";
     cout<<"    "<<aver[i]<<endl;
    }
  }
}

void good(char course[5][10],int num[4],float *pscore,float aver[4])
   // 找成绩优秀学生(全部课程成绩在85分以上或平均成绩在90分以上)的函数
 {int i,j,k,n;
  cout<<"    ======Students whose score is good======"<<endl;
  cout<<"NO.   ";
  for (i=0;i<5;i++)
    cout<<course[i]<<"  ";
  cout<<"  average"<<endl;
  for (i=0;i<4;i++)
   {n=0;
    for (j=0;j<5;j++)
      if (*(pscore+5*i+j)>85.0) n++;
    if ((n==5)||(aver[i]>=90))
     {cout<<num[i]<<"      ";
      for (k=0;k<5;k++)
        cout<<*(pscore+5*i+k)<<"      ";
      cout<<"    "<<aver[i]<<endl;
     }
 }
}
```

### 6.16题

```cpp
#include <iostream>
using namespace std;
int main()
{char str[50],*pstr;
 int i,j,k,m,e10,digit,ndigit,a[10],*pa;
 cout<<"input a string:"<<endl;
gets(str);
cout<<endl;
pstr=&str[0];    //字符指针pstr指向数组str首元素
pa=&a[0];        //指针pa指向a数组首元素
ndigit=0;        //ndigit代表有多少个整数
i=0;             //i代表字符串中的第几个字符/
j=0;             //j代表连续数字的位数
while(*(pstr+i)!='\0')
 {if((*(pstr+i)>='0') && (*(pstr+i)<='9'))
    j++;
  else
   {if (j>0)
     {digit=*(pstr+i-1)-48;          //将个数位赋予digit
      k=1;
      while (k<j)     //将含有两位以上数的其它位的数值累计于digit
       {e10=1;
        for (m=1;m<=k;m++)
        e10=e10*10;                  //e10代表该位数所应乘的因子
        digit=digit+(*(pstr+i-1-k)-48)*e10;  //将该位数的数值累加于digit
        k++;                         //位数k自增
       }
      *pa=digit;                     //将数值放在数组a中
      ndigit++;
      pa++;                         //指针pa指向a数组下一元素
      j=0;
     }
   }
  i++;
 }
 if (j>0)                         //以数字结尾字符串的最后一个数据
  {digit=*(pstr+i-1)-48;          //将个数位赋予digit
   k=1;
   while (k<j)          // 将含有两位以上数的其它位的数值累加于digit
    {e10=1;
     for (m=1;m<=k;m++)
       e10=e10*10;            //e10代表位数所应乘的因子
     digit=digit+(*(pstr+i-1-k)-48)*e10;  //将该位数的数值累加于digit
     k++;  /*位数K自增*/
    }
   *pa=digit;                 //将数值放到数组a中
   ndigit++;
   j=0;
  }
  printf("There are %d numbers in this line. They are:\n",ndigit);
  j=0;
  pa=&a[0];
  for (j=0;j<ndigit;j++)            //打印数据
    cout<<*(pa+j)<<endl;
  cout<<endl;
  return 0;
}
```

### 6.17题

```cpp
#include <iostream>
using namespace std;
int main()
{int strcmp(char *p1,char *p2);
 int m;
 char str1[20],str2[20],*p1,*p2;
 cout<<"input two strings:"<<endl;
 cin>>str1;
 cin>>str2;
 p1=&str1[0];
 p2=&str2[0];
 m=strcmp(p1,p2);
 cout<<"result:"<<m<<endl;
 return 0;
}

int strcmp(char *p1,char *p2)         //自已定义字符串比较函数
{int i;
 i=0;
 while(*(p1+i)==*(p2+i))
   if (*(p1+i++)=='\0') return(0);     //全部字符相同时返回结果0
 return(*(p1+i)-*(p2+i));     //不相同时返回结果为第一对不相同字符的ASCII码的差值
}
```

### 6.18题

```cpp
#include <iostream>
using namespace std;
int main()
{char *month_name[13]={"illegal
month","January","February","March","April",
   "May","June","July","August","September","October",
"November","December"};
int n;
cout<<"input month:"<<endl;
cin>>n;
if ((n<=12) && (n>=1))
   cout<<"It is "<<*(month_name+n)<<endl;
else
  cout<<"It is wrong"<<endl;
return 0;
}
```

### 6.19题

```cpp
#include <iostream>
using namespace std;

int main()
{void sort(char **p);
 const int m=20;        //定义字符串的最大长度
 int i;
 char **p,*pstr[5],str[5][m];
 for (i=0;i<5;i++)
   pstr[i]=str[i];   /*将第i个字符串的首地址赋予指针数组 pstr 的第i个元素*/
 cout<<"input 5 strings:"<<endl;
 for (i=0;i<5;i++)
    cin>>pstr[i];
 p=pstr;
 sort(p);
 cout<<"strings sorted:"<<endl;
 for (i=0;i<5;i++)
    cout<<pstr[i]<<endl;
 return 0;
}

void sort(char **p)            //冒泡法对5个字符串排序函数
{int i,j;
 char *temp;
 for (i=0;i<5;i++)
  {for (j=i+1;j<5;j++)
    {if (strcmp(*(p+i),*(p+j))>0)      //比较后交换字符串地址
      {temp=*(p+i);
       *(p+i)=*(p+j);
       *(p+j)=temp;
      }
     }
  }
}
```

### 6.20题

```cpp
#include <iostream>
using namespace std;
int main()
{void sort(int **p,int n);
 int i,n,data[10],**p,*pstr[10];
 cout<<"input n:";
 cin>>n;
 for (i=0;i<n;i++)
   pstr[i]=&data[i];   /*将第i个整数的地址赋予指针数组 pstr 的第i个元素*/
 cout<<"input "<<n<<" integer numbers:"<<endl;
 for (i=0;i<n;i++)
   cin>>*pstr[i];
 p=pstr;
 sort(p,n);
 cout<<"Now,the sequence is:"<<endl;
 for (i=0;i<n;i++)
   cout<<*pstr[i]<<"  ";
 cout<<endl;
 return 0;
}

void sort(int **p,int n)
{int i,j,*temp;
 for (i=0;i<n-1;i++)
  {for (j=i+1;j<n;j++)
     {if (**(p+i)>**(p+j))      //比较后交换整数地址
       {temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
       }
```

## 第七章

### 7.1题

```cpp
#include <iostream>
using namespace std;
struct
   { int year;
     int month;
     int day;
   }date;
int main()
 {int days;
  cout<<"input year,month,day:";
  cin>>date.year>>date.month>>date.day;
  switch(date.month)
  { case 1: days=date.day;      break;
    case 2: days=date.day+31;   break;
    case 3: days=date.day+59;   break;
    case 4: days=date.day+90;   break;
    case 5: days=date.day+120;  break;
    case 6: days=date.day+151;  break;
    case 7: days=date.day+181;  break;
    case 8: days=date.day+212;  break;
    case 9: days=date.day+243;  break;
    case 10: days=date.day+273; break;
    case 11: days=date.day+304; break;
    case 12: days=date.day+334; break;
 }
 if ((date.year %4== 0 && date.year % 100 != 0
      ||date.year % 400 == 0) && date.month >=3)
         days+=1;
 cout<<date.month<<"/"<<date.day<<" is the "<<days
	 <<"th day in "<<date.year<<"."<<endl;
 return 0;
}
==========================================================================================
7.1题另一解
#include <iostream>
using namespace std;
struct
     {int year;
     int month;
     int day;
	 }date;
 int main()
    {int i,days;
     int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
     cout<<"input year,month,day:";
     cin>>date.year>>date.month>>date.day;
     days=0;
     for (i=1;i<date.month;i++)
       days+=day_tab[i];
     days+=date.day;
     if ((date.year%4==0 && date.year%100!=0 || date.year%400==0) &&
date.month>=3)
       days+=1;
     cout<<date.month<<"/"<<date.day<<" is the "<<days
	   <<"th day in "<<date.year<<"."<<endl;
    return 0;
}
```

### 7.2题

```cpp
#include <iostream>
using namespace std;
struct y_m_d
     {int year;
     int month;
     int day;
	 };
 int main()
 {y_m_d date;
  int days(int,int,int);                     /* 对days函数的声明 */
  int day_sum;
  cout<<"input year,month,day:";
  cin>>date.year>>date.month>>date.day;
  day_sum=days(date.year,date.month,date.day);
  cout<<date.month<<"/"<<date.day<<" is the "<<day_sum
	  <<"th day in "<<date.year<<endl;
  return 0;
  }

int days(int year,int month,int day)        /* 定义days函数 */
{int day_sum,i;
 int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 day_sum=0;
 for (i=1;i<month;i++)
   day_sum+=day_tab[i];
 day_sum+=day;
 if ((year%4==0 && year%100!=0 || year%4==0) && month>=3)
     day_sum+=1;
 return(day_sum);
}
```

### 7.3题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
const int n=5;
struct student
{ char num[6];
  char name[8];
  int score[4];
}stu[n];
int main()
{void print(student stu[6]);
 int i,j;
 for (i=0;i<n;i++)
 {cout<<"input scores of student "<<i+1<<":"<<endl;
  cout<<"NO.: ";
  cin>>stu[i].num;
  cout<<"name: ";
  cin>>stu[i].name;
  for (j=0;j<3;j++)
    {cout<<"score "<<j+1<<":";
     cin>>stu[i].score[j];
    }
  cout<<endl;
 }
print(stu);
return 0;
}

void print(student stu[6])
 {int i,j;
  cout<<" NO.      name      score1   score2   score3"<<endl;
  for (i=0;i<n;i++)
   {cout<<stu[i].num<<"  "<<setw(10)<<stu[i].name<<"      ";
    for (j=0;j<3;j++)
      cout<<setw(3)<<stu[i].score[j]<<"      ";
    cout<<endl;
   }
 }
```

### 7.4题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
const int n=5;
struct student
{ char num[6];
  char name[8];
  int score[4];
}stu[n];
int main()
{void input(student stu[]);
 void print(student stu[]);
 input(stu);
 print(stu);
 return 0;
}

void input(student stu[])
{int i,j;
 for (i=0;i<n;i++)
 {cout<<"input scores of student "<<i+1<<":"<<endl;
  cout<<"NO.: ";
  cin>>stu[i].num;
  cout<<"name: ";
  cin>>stu[i].name;
  for (j=0;j<3;j++)
    {cout<<"score "<<j+1<<":";
     cin>>stu[i].score[j];
    }
  }
}
 void print(student stu[])
 {int i,j;
  cout<<" NO.      name      score1   score2   score3"<<endl;
  for (i=0;i<n;i++)
   {cout<<stu[i].num<<"  "<<setw(10)<<stu[i].name<<"      ";
    for (j=0;j<3;j++)
      cout<<setw(3)<<stu[i].score[j]<<"      ";
    cout<<endl;
   }
 }
```

### 7.5题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
const int n=10;
struct student
{ char num[6];
  char name[8];
  int score[4];
  float avr;
} stu[n];

int main()
{ int i,j,max,maxi,sum;
  float average;
  for (i=0;i<n;i++)
    {cout<<"input scores of student "<<i+1<<endl;;
     cout<<"NO.:";
     cin>>stu[i].num;
     cout<<"name:";
     cin>>stu[i].name;
     for (j=0;j<3;j++)
       {cout<<"score "<<j+1<<":";
        cin>>stu[i].score[j];
       }
	 cout<<endl;
    }
  average=0;
  max=0;
  maxi=0;
  for (i=0;i<n;i++)
    {sum=0;
     for (j=0;j<3;j++)
       sum+=stu[i].score[j];
     stu[i].avr=sum/3.0;
     average+=stu[i].avr;
     if (sum>max)
      {max=sum;
       maxi=i;
      }
    }
  average/=n;
  cout<<"     NO.        name      score1    score2    score3
average"<<endl;
  for (i=0;i<n;i++)
    {cout<<setw(8)<<stu[i].num<<"  "<<setw(10)<<stu[i].name<<"       ";
     for (j=0;j<3;j++)
       cout<<setw(3)<<stu[i].score[j]<<"       ";
     cout<<stu[i].avr<<endl;
    }
    cout<<"average="<<average<<endl;
    cout<<"The highest score is :"<<stu[maxi].name<<", score
total:"<<max<<endl;
  return 0;
 }
```

### 7.6题

```cpp
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 struct student *next;
};
int main()
 {student a,b,c,*head,*p;
  a.num=10001; a.score=89.5;
  b.num=10003; b.score=90;
  c.num=10007; c.score=85;     //为结点的num和score成员赋值
  head=&a;                      //将结点a的起始地址赋给头指针head
  a.next=&b;                    //将结点b的起始地址赋给a结点的next成员
  b.next=&c;                    //将结点c的起始地址赋给b结点的next成员
  c.next=NULL;                  //c结点的next成员不存放其他结点地址
  p=head;                       //使p指针指向a结点
  do
   {cout<<p->num<<"  "<<p->score<<endl; //输出p指向的结点的数据
    p=p->next;                                //使p指向下一结点
   }while(p!=NULL);                          //输出完c结点后p的值为NULL
  return 0;
}

7.6题另一解
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
                    //定义n为全局变量，本文件模块中各函数均可使用它
student *creat(void)     //定义函数。此函数带回一个指向链表头的指针
{student *head;
 student *p1,*p2;
 int n=0;
 p1=p2=new student;       //开辟一个新单元，并使p1,p2指向它
cin>>p1->num>>p1->score;
head=NULL;
while(p1->num!=0)
{n=n+1;
 if(n==1) head=p1;
 else p2->next=p1;
 p2=p1;
 p1=new student;
 cin>>p1->num>>p1->score;
}
p2->next=NULL;
return(head);
}
```

### 7.7题

```cpp
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
int n;
void print(student *head)
 {student *p;
  cout<<"Now，These "<<n<<" records are："<<endl;
  p=head;
  if(head!=NULL)
  do
    {cout<<p->num<<"  "<<p->score<<endl;
     p=p->next;
	}while(p!=NULL);
}

7.7题另一解
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
int n;
student *del(student *head,long num)
{student *p1,*p2;
 if (head==NULL)                    //是空表
 {cout<<"list null!"<<endl; return(head);}
 p1=head;                          //使p1指向第一个结点
 while(num!=p1->num && p1->next!=NULL) //p1指向的不是所要找的结点且后面还有
结点
 {p2=p1; p1=p1->next;}                 //p1后移一个结点
 if(num==p1->num)                        //找到了
 {if(p1==head) head=p1->next;   //若p1指向的是首结点，把第二个结点地址赋予
head
  else p2->next=p1->next;    //否则将下一结点地址赋给前一结点地址
  cout<<"delete:"<<num<<endl;
  n=n+1;
 }
 else cout<<"cannot find "<<num;     //找不到该结点
 return(head);
}
```

### 7.8题

```cpp
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
int n;
student *del(student *head,long num)
{student *p1,*p2;
 if (head==NULL)                    //是空表
{cout<<"list null!"<<endl; return(head);}
    p1=head;                          //使p1指向第一个结点
    while(num!=p1->num && p1->next!=NULL) //p1指向的不是所要找的结点且后面
还有结点
{p2=p1; p1=p1->next;}                 //p1后移一个结点
if(num==p1->num)                        //找到了
{if(p1==head) head=p1->next;   //若p1指向的是首结点，把第二个结点地址赋予
head
 else p2->next=p1->next;    //否则将下一结点地址赋给前一结点地址
 cout<<"delete:"<<num<<endl;
n=n-1;
}
else cout<<"cannot find "<<num;     //找不到该结点
return(head);
}
```

### 7.9题

```cpp
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
  student*next;
};
int n;

student *insert(student *head,student *stud)
{student *p0,*p1,*p2;
 p1=head;                          //使p1指向第一个结点
 p0=stud;                          //指向要插入的结点
 if(head==NULL)                    //原来的链表是空表
 {head=p0;p0->next=NULL;}          //使p0指向的结点作为头结点
 else
 {while((p0->num>p1->num) && (p1->next!=NULL))
 {p2=p1;                       //使p2指向刚才p1指向的结点
  p1=p1->next;}                //p1后移一个结点
  if(p0->num<=p1->num)
  {if(head==p1) head=p0;        //插到原来第一个结点之前
   else p2->next=p0;            //插到p2指向的结点之后
   p0->next=p1;}
  else
  {p1->next=p0; p0->next=NULL;}}  //插到最后的结点之后
   n=n+1;                              //结点数加１
   return (head);
}
```

### 7.10题

```cpp
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
int n;

int main()
{ student *creat(void);
  student *del(student *,long);
  student *insert(student *,student *);
  void print(student *);
  student *head,stu;
  long del_num;
  cout<<"input records:"<<endl;
  head=creat();                        //返回头指针
  print(head);                          //输出全部结点
  cout<<endl<<"input the deleted number:";
  cin>>del_num;                        //输入要删除的学号
  head=del(head,del_num);              //删除后链表的头地址
  print(head);                         //输出全部结点
  cout<<endl<<"input the inserted record:";  //输入要插入的结点
  cin>>stu.num>>stu.score;
  head=insert(head,&stu);              //返回地址
  print(head);                         //输出全部结点
  cout<<endl<<"input the inserted record:";  //输入要插入的结点
  cin>>stu.num>>stu.score;
  head=insert(head,&stu);              //返回地址
  print(head);
  return 0;
}

student *creat(void)       //建立链表的函数
{student *head;
 student *p1,*p2;
 n=0;
 p1=p2=new student;       //开辟一个新单元，并使p1,p2指向它
 cin>>p1->num>>p1->score;
 head=NULL;
 while(p1->num!=0)
{n=n+1;
 if(n==1) head=p1;
 else p2->next=p1;
 p2=p1;
 p1=new student;
 cin>>p1->num>>p1->score;
}
p2->next=NULL;
return(head);
}

student *del(student *head,long num)   //删除结的函数
{student *p1,*p2;
 if (head==NULL)                    //是空表
 {cout<<"list null!"<<endl; return(head);}
 p1=head;                          //使p1指向第一个结点
 while(num!=p1->num && p1->next!=NULL) //p1指向的不是所要找的结点且后面还有
结点
 {p2=p1; p1=p1->next;}                 //p1后移一个结点
 if(num==p1->num)                        //找到了
 {if(p1==head) head=p1->next;   //若p1指向的是首结点，把第二个结点地址赋予
head
  else p2->next=p1->next;    //否则将下一结点地址赋给前一结点地址
  cout<<"delete:"<<num<<endl;
  n=n-1;
 }
 else cout<<"cannot find "<<num;     //找不到该结点
 return(head);
}

student *insert(student *head,student *stud)  //插入结点的函数
{student *p0,*p1,*p2;
 p1=head;                          //使ｐ１指向第一个结点
 p0=stud;                          //指向要插入的结点
 if(head==NULL)                    //原来的链表是空表
 {head=p0;p0->next=NULL;}          //使ｐ０指向的结点作为头结点
 else
 {while((p0->num>p1->num) && (p1->next!=NULL))
 {p2=p1;                       //使ｐ２指向刚才p１指向的结点
  p1=p1->next;}                //p1后移一个结点
  if(p0->num<=p1->num)
  {if(head==p1) head=p0;        //插到原来第一个结点之前
   else p2->next=p0;            //插到p2指向的结点之后*／
   p0->next=p1;}
  else
  {p1->next=p0; p0->next=NULL;}}  //插到最后的结点之后
   n=n+1;                         //结点数加１
   return (head);
}

void print(student *head)         //输出链表的函数
 {student *p;
  cout<<"Now，These "<<n<<" records are："<<endl;
  p=head;
  if(head!=NULL)
  do
    {cout<<p->num<<"  "<<p->score<<endl;
     p=p->next;
	}while(p!=NULL);
}

7.10题另一解
#include <iostream>
using namespace std;
#define NULL 0
struct student
{long num;
 float score;
 student *next;
};
int n;

int main()
{ student *creat(void);
  student *del(student *,long);
  student *insert(student *,student *);
  void print(student *);
  student *head,*stu;
  long del_num;
  cout<<"input records:"<<endl;
  head=creat();                        //返回头指针
  print(head);                          //输出全部结点
  cout<<endl<<"input the deleted number:";
  cin>>del_num;                        //输入要删除的学号
  while(del_num!=0)
  {head=del(head,del_num);              //删除后链表的头地址
   print(head);                         //输出全部结点
   cout<<"input the deleted number:";
   cin>>del_num;
  }
  cout<<endl<<"input the inserted record:";  //输入要插入的结点
  stu=new student;                      //开辟一个新结点
  cin>>stu->num>>stu->score;
  while(stu->num!=0)
  {head=insert(head,stu);              //返回地址
   print(head);                         //输出全部结点
   cout<<endl<<"input the inserted record:";  //输入要插入的结点
   stu=new student;
   cin>>stu->num>>stu->score;
  }
  return 0;
}

student *creat(void)       //建立链表的函数
{student *head;
 student *p1,*p2;
 n=0;
 p1=p2=new student;       //开辟一个新单元，并使p1,p2指向它
 cin>>p1->num>>p1->score;
 head=NULL;
 while(p1->num!=0)
{n=n+1;
 if(n==1) head=p1;
 else p2->next=p1;
 p2=p1;
 p1=new student;
 cin>>p1->num>>p1->score;
}
p2->next=NULL;
return(head);
}

student *del(student *head,long num)   //删除结点的函数
{student *p1,*p2;
 if (head==NULL)                    //是空表
 {cout<<"list null!"<<endl; return(head);}
 p1=head;                          //使p1指向第一个结点
 while(num!=p1->num && p1->next!=NULL) //p1指向的不是所要找的结点且后面还有
结点
 {p2=p1; p1=p1->next;}                 //p1后移一个结点
 if(num==p1->num)                        //找到了
 {if(p1==head) head=p1->next;   //若p1指向的是首结点，把第二个结点地址赋予
head
  else p2->next=p1->next;    //否则将下一结点地址赋给前一结点地址
  cout<<"delete:"<<num<<endl;
  n=n-1;
 }
 else cout<<"cannot find "<<num;     //找不到该结点
 return(head);
}

student *insert(student *head,student *stud)  //插入结点的函数
{student *p0,*p1,*p2;
 p1=head;                          //使p1指向第一个结点
 p0=stud;                          //指向要插入的结点
 if(head==NULL)                    //原来的链表是空表
 {head=p0;p0->next=NULL;}          //使p0指向的结点作为头结点
 else
 {while((p0->num>p1->num) && (p1->next!=NULL))
 {p2=p1;                       //使p2指向刚才p1指向的结点
  p1=p1->next;}                //p1后移一个结点
  if(p0->num<=p1->num)
  {if(head==p1) head=p0;        //插到原来第一个结点之前
   else p2->next=p0;            //插到p2指向的结点之后
   p0->next=p1;}
  else
  {p1->next=p0; p0->next=NULL;}}  //插到最后的结点之后
   n=n+1;                         //结点数加１
   return (head);
}

void print(student *head)         //输出链表的函数
 {student *p;
  cout<<"Now，These "<<n<<" records are："<<endl;
  p=head;
  if(head!=NULL)
  do
    {cout<<p->num<<"  "<<p->score<<endl;
     p=p->next;
	}while(p!=NULL);
}
```

## 第八章

### 8.1题

```cpp
#include <iostream>
using namespace std;
class Time
 {public:                    //成员改为公用的
    int hour;
    int minute;
    int sec;
  };
Time t;
void set_time(void)          //在main函数之前定义
 {
  cin>>t.hour;
  cin>>t.minute;
  cin>>t.sec;
 }

void show_time(void)         //在main函数之前定义
 {
  cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
 }

int main()
{set_time();
 show_time();
 return 0;
}
```

### 8.2题

```cpp
#include <iostream>
using namespace std;
class Time
  {public:
    void set_time(void)
     {cin>>hour;
      cin>>minute;
      cin>>sec;
     }
    void show_time(void)
     {cout<<hour<<":"<<minute<<":"<<sec<<endl;}

   private: int hour;
     int minute;
     int sec;
  };

Time t;
int main()
 {
  t.set_time();
  t.show_time();
  return 0;
 }
```

### 8.3题

```cpp
#include <iostream>
using namespace std;
class Time
  {public:
    void set_time(void);
    void show_time(void);
   private:
    int hour;
    int minute;
    int sec;
  };

void Time::set_time(void)
  {cin>>hour;
   cin>>minute;
   cin>>sec;
  }

void Time::show_time(void)
{cout<<hour<<":"<<minute<<":"<<sec<<endl;}

Time t;
int main()
{ t.set_time();
  t.show_time();
  return 0;
}
```

### 8.4题

```cpp
//xt8-4.h(student.h)
class Student
{ public:
    void display( );
	void set_value();
  private:
    int num;
    char name[20];
    char sex ;
  };
```

### 8.4题

```cpp
//xt8-4-1.cpp(main.cpp)
#include <iostream>
using namespace std;
#include "xt8-4.h"
int main()
{Student stud;
 stud.set_value();
 stud.display();
 return 0;
}
8.4题另一解
//xt8-4-2.cpp(即student.cpp)
#include "xt8-4.h"                      //在此文件中进行函数的定义
#include <iostream>
using namespace std;                   //不要漏写此行
void Student::display( )
{ cout<<"num:"<<num<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"sex:"<<sex<<endl;
}

void Student::set_value()
{ cin>>num;
  cin>>name;
  cin>>sex;
}
```

38.5题

```cpp
//xt8-5.h(arraymax.h)
class Array_max
{public:
   void set_value();
   void max_value();
   void show_value();
 private:
   int array[10];
   int max;
};
```

### 8.5题

```cpp
//xt8-5-1.cpp(file1.cpp)
#include <iostream>
#include "xt8-5.h"
int main()
 {Array_max  arrmax;
  arrmax.set_value();
  arrmax.max_value();
  arrmax.show_value();
  return 0;
 }
```

### 8.5题

```cpp
//xt8-5-2.cpp(arraymax.cpp)
#include <iostream>
using namespace std;
#include "xt8-5.h"
void Array_max::set_value()
 { int i;
   for (i=0;i<10;i++)
     cin>>array[i];
 }

void Array_max::max_value()
 {int i;
  max=array[0];
  for (i=1;i<10;i++)
   if(array[i]>max) max=array[i];
  }

void Array_max::show_value()
 {cout<<"max="<<max<<endl;
 }
```

### 8.6题

```cpp
#include <iostream>
using namespace std;
class Box
{public:
  void get_value();
  float volume();
  void display();
 public:
  float lengh;
  float width;
  float height;
  };

void Box::get_value()
{ cout<<"please input lengh, width,height:";
  cin>>lengh;
  cin>>width;
  cin>>height;
}

float Box::volume()
{ return(lengh*width*height);}

void Box::display()
{ cout<<volume()<<endl;}

int main()
{Box box1,box2,box3;
 box1.get_value();
 cout<<"volmue of bax1 is ";
 box1.display();
 box2.get_value();
 cout<<"volmue of bax2 is ";
 box2.display();
 box3.get_value();
 cout<<"volmue of bax3 is ";
 box3.display();
 return 0;
}

8.6题另一解
#include <iostream>
using namespace std;
class Box
{public:
  void get_value();
  void volume();
  void display();
 public:
  float lengh;
  float width;
  float height;
  float vol;
  };

void Box::get_value()
{ cout<<"please input lengh, width,height:";
  cin>>lengh;
  cin>>width;
  cin>>height;
}

void Box::volume()
{ vol=lengh*width*height;}

void Box::display()
{ cout<<vol<<endl;}

int main()
{Box box1,box2,box3;
 box1.get_value();
 box1.volume();
 cout<<"volmue of bax1 is ";
 box1.display();
 box2.get_value();
 box2.volume();
 cout<<"volmue of bax2 is ";
 box2.display();
 box3.get_value();
 box3.volume();
 cout<<"volmue of bax3 is ";
 box3.display();
 return 0;
}
```

## 第九章

### 9.2题

```cpp
#include <iostream>
using namespace std;
class Date
 {public:
   Date(int,int,int);
   Date(int,int);
   Date(int);
   Date();
   void display();
  private:
   int month;
   int day;
   int year;
 };

Date::Date(int m,int d,int y):month(m),day(d),year(y)
 { }

Date::Date(int m,int d):month(m),day(d)
 {year=2005;}

Date::Date(int m):month(m)
 {day=1;
  year=2005;
 }

Date::Date()
 {month=1;
  day=1;
  year=2005;
 }

void Date::display()
 {cout<<month<<"/"<<day<<"/"<<year<<endl;}

int main()
{
 Date d1(10,13,2005);
 Date d2(12,30);
 Date d3(10);
 Date d4;
 d1.display();
 d2.display();
 d3.display();
 d4.display();
 return 0;
 }
```

### 9.3题

```cpp
#include <iostream>
using namespace std;
class Date
 {public:
   Date(int=1,int=1,int=2005);
   void display();
  private:
   int month;
   int day;
   int year;
 };

Date::Date(int m,int d,int y):month(m),day(d),year(y)
 { }

void Date::display()
 {cout<<month<<"/"<<day<<"/"<<year<<endl;}

int main()
{
 Date d1(10,13,2005);
 Date d2(12,30);
 Date d3(10);
 Date d4;
 d1.display();
 d2.display();
 d3.display();
 d4.display();
 return 0;
}
```

### 9.4题

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void display();
  private:
   int num;
   float score;
 };

void Student::display()
 {cout<<num<<" "<<score<<endl;}

int main()
{Student stud[5]={
  Student(101,78.5),Student(102,85.5),Student(103,98.5),
  Student(104,100.0),Student(105,95.5)};
 Student *p=stud;
 for(int i=0;i<=2;p=p+2,i++)
  p->display();
 return 0;
 }
```

### 9.5题

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   int num;
   float score;
 };

void main()
{Student stud[5]={
  Student(101,78.5),Student(102,85.5),Student(103,98.5),
  Student(104,100.0),Student(105,95.5)};
 void max(Student* );
 Student *p=&stud[0];
 max(p);
 }

void max(Student *arr)
{float max_score=arr[0].score;
 int k=0;
 for(int i=1;i<5;i++)
   if(arr[i].score>max_score) {max_score=arr[i].score;k=i;}
 cout<<arr[k].num<<" "<<max_score<<endl;
}
```

### 9.6题

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display(){cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{Student stud(101,78.5);
 stud.display();
 stud.change(101,80.5);
 stud.display();
 return 0;
}
```

### 9.7题

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() {cout<<num<<" "<<score<<endl;}
     //可改为:void display() const {cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{const Student stud(101,78.5);
 stud.display();
 //stud.change(101,80.5);
 stud.display();
 return 0;
}
```

### 9.7题另一解

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) const  {num=n;score=s;}
   void display() const {cout<<num<<" "<<score<<endl;}
  private:
   mutable int num;
   mutable float score;
 };

int main()
{const Student stud(101,78.5);
 stud.display();
 stud.change(101,80.5);
 stud.display();
 return 0;
}
 9.7题另一解
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() {cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{Student stud(101,78.5);
 Student *p=&stud;
 p->display();
 p->change(101,80.5);
 p->display();
 return 0;
}
```

### 9.7题另一解A

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() {cout<<num<<" "<<score<<endl;}
  private:
   mutable int num;
   mutable float score;
 };

int main()
{Student stud(101,78.5);
 const Student *p=&stud;
 p->display();
 p->change(101,80.5);
 p->display();
 return 0;
}
```

### 9.7题另一解B

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() const{cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{Student stud(101,78.5);
 const Student *p=&stud;
 p->display();
 stud.change(101,80.5);
 p->display();
 return 0;
}
```

### 9.7题另一解

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() {cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{Student stud(101,78.5);
 Student * const p=&stud;
 p->display();
 p->change(101,80.5);
 p->display();
 return 0;
}
```

### 9.8题

```cpp
#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s) {num=n;score=s;}
   void display() {cout<<num<<" "<<score<<endl;}
  private:
   int num;
   float score;
 };

int main()
{Student stud(101,78.5);
 void fun(Student&);
 fun(stud);
 return 0;
}

void fun(Student &stu)
{stu.display();
 stu.change(101,80.5);
 stu.display();
}
```

### 9.9题

```cpp
#include <iostream>
using namespace std;
class Product
 {public:
   Product(int n,int q,float p):num(n),quantity(q),price(p){};
   void total();
   static float average();
   static void display();

  private:
   int num;
   int quantity;
   float price;
   static float discount;
   static float sum;
   static int n;
 };

void Product::total()
 {float rate=1.0;
  if(quantity>10) rate=0.98*rate;
  sum=sum+quantity*price*rate*(1-discount);
  n=n+quantity;
 }

void Product::display()
 {cout<<sum<<endl;
  cout<<average()<<endl;
 }

float Product::average()
 {return(sum/n);}


float Product::discount=0.05;
float Product::sum=0;
int Product::n=0;

int main()
 {
   Product Prod[3]={
     Product(101,5,23.5),Product(102,12,24.56),Product(103,100,21.5)
    };
   for(int i=0;i<3;i++)
     Prod[i].total();
   Product::display();
   return 0;
 }
```

### 9.10题

```cpp
#include <iostream>
using namespace std;
class Date;
class Time
 {public:
   Time(int,int,int);
   friend void display(const Date &,const Time &);
  private:
   int hour;
   int minute;
   int sec;
 };

 Time::Time(int h,int m,int s)
 {hour=h;
  minute=m;
  sec=s;
 }

class Date
 {public:
   Date(int,int,int);
   friend void display(const Date &,const Time &);
  private:
   int month;
   int day;
   int year;
 };

Date::Date(int m,int d,int y)
 {month=m;
  day=d;
  year=y;
 }

void display(const Date &d,const Time &t)
 {
  cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
  cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
 }


int main()
{
 Time t1(10,13,56);
 Date d1(12,25,2004);
 display(d1,t1);
 return 0;
}
```

### 9.11题

```cpp
#include <iostream>
using namespace std;
class Time;
class Date
 {public:
   Date(int,int,int);
   friend Time;
  private:
   int month;
   int day;
   int year;
 };

Date::Date(int m,int d,int y):month(m),day(d),year(y){ }

class Time
 {public:
   Time(int,int,int);
   void display(const Date &);
  private:
   int hour;
   int minute;
   int sec;
 };

Time::Time(int h,int m,int s):hour(h),minute(m),sec(s){ }

void Time::display(const Date &d)
 {
  cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
  cout<<hour<<":"<<minute<<":"<<sec<<endl;
 }


int main()
{
 Time t1(10,13,56);
 Date d1(12,25,2004);
 t1.display(d1);
 return 0;
}
```

### 9.12题

```cpp
#include <iostream>
using namespace std;
template<class numtype>
class Compare
 {public:
   Compare(numtype a,numtype b);
   numtype max();
   numtype min();
  private:
   numtype x,y;
 };
template <class numtype>
Compare<numtype>::Compare(numtype a,numtype b)
  {x=a;y=b;}
template <class numtype>
numtype Compare<numtype>::max()
 {return (x>y)?x:y;}
template <class numtype>
numtype Compare<numtype>::min()
  {return (x<y)?x:y;}

int main()
{Compare<int> cmp1(3,7);
 cout<<cmp1.max()<<" is the Maximum of two integer numbers."<<endl;
 cout<<cmp1.min()<<" is the Minimum of two integer numbers."<<endl<<endl;
 Compare<float> cmp2(45.78,93.6);
 cout<<cmp2.max()<<" is the Maximum of two float numbers."<<endl;
 cout<<cmp2.min()<<" is the Minimum of two float numbers."<<endl<<endl;
 Compare<char> cmp3('a','A');
 cout<<cmp3.max()<<" is the Maximum of two characters."<<endl;
 cout<<cmp3.min()<<" is the Minimum of two characters."<<endl;
 return 0;
}
```

## 第十章

### 10.1题

```cpp
#include <iostream>
using namespace std;
class Complex
 {public:
   Complex(){real=0;imag=0;}
   Complex(double r,double i){real=r;imag=i;}
   double get_real();
   double get_imag();
   void display();
  private:
   double real;
   double imag;
 };

double Complex::get_real()
{return real;}

double Complex::get_imag()
{return imag;}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;}

Complex operator + (Complex &c1,Complex &c2)
{
 return Complex(c1.get_real()+c2.get_real(),c1.get_imag()+c2.get_imag());
}

int main()
{Complex c1(3,4),c2(5,-10),c3;
 c3=c1+c2;
 cout<<"c3=";
 c3.display();
 return 0;
}
```

### 10.2题

```cpp
#include <iostream>
using namespace std;
class Complex
 {public:
   Complex(){real=0;imag=0;}
   Complex(double r,double i){real=r;imag=i;}
   Complex operator+(Complex &c2);
   Complex operator-(Complex &c2);
   Complex operator*(Complex &c2);
   Complex operator/(Complex &c2);
   void display();
  private:
   double real;
   double imag;
 };

Complex Complex::operator+(Complex &c2)
{Complex c;
 c.real=real+c2.real;
 c.imag=imag+c2.imag;
 return c;}

Complex Complex::operator-(Complex &c2)
{Complex c;
 c.real=real-c2.real;
 c.imag=imag-c2.imag;
 return c;}

Complex Complex::operator*(Complex &c2)
{Complex c;
 c.real=real*c2.real-imag*c2.imag;
 c.imag=imag*c2.real+real*c2.imag;
 return c;}

Complex Complex::operator/(Complex &c2)
{Complex c;
 c.real=(real*c2.real+imag*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
 c.imag=(imag*c2.real-real*c2.imag)/(c2.real*c2.real+c2.imag*c2.imag);
 return c;}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;}

int main()
{Complex c1(3,4),c2(5,-10),c3;
 c3=c1+c2;
 cout<<"c1+c2=";
 c3.display();
 c3=c1-c2;
 cout<<"c1-c2=";
 c3.display();
 c3=c1*c2;
 cout<<"c1*c2=";
 c3.display();
 c3=c1/c2;
 cout<<"c1/c2=";
 c3.display();
 return 0;
}
```

### 10.3题

```cpp
#include <iostream>        //用VC++时改为∶ #include <iostream.h>
using namespace std;      //用VC++时为取消此行
class Complex
 {public:
   Complex(){real=0;imag=0;}
   Complex(double r,double i){real=r;imag=i;}
   Complex operator+(Complex &c2);
   Complex operator+(int &i);
   friend Complex operator+(int&,Complex &);
   void display();
  private:
   double real;
   double imag;
 };

Complex Complex::operator+(Complex &c)
{return Complex(real+c.real,imag+c.imag);}

Complex Complex::operator+(int &i)
{return Complex(real+i,imag);}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;}

Complex operator+(int &i,Complex &c)
{return Complex(i+c.real,c.imag);}

int main()
{Complex c1(3,4),c2(5,-10),c3;
 int i=5;
 c3=c1+c2;
 cout<<"c1+c2=";
 c3.display();
 c3=i+c1;
 cout<<"i+c1=";
 c3.display();
 c3=c1+i;
 cout<<"c1+i=";
 c3.display();
 return 0;
}
```

### 10.4题

```cpp
#include <iostream>
using namespace std;
class Matrix                                          //定义Matrix类
 {public:
   Matrix();                                          //默认构造函数
   friend Matrix operator+(Matrix &,Matrix &);        //重载运算符“+”
   void input();                                      //输入数据函数
   void display();                                    //输出数据函数
  private:
   int mat[2][3];
 };

Matrix::Matrix()                                      //定义构造函数
{for(int i=0;i<2;i++)
  for(int j=0;j<3;j++)
   mat[i][j]=0;
}

Matrix operator+(Matrix &a,Matrix &b)                //定义重载运算符“+”
函数
{Matrix c;
 for(int i=0;i<2;i++)
   for(int j=0;j<3;j++)
     {c.mat[i][j]=a.mat[i][j]+b.mat[i][j];}
 return c;
}
void Matrix::input()                                   //定义输入数据函数
{cout<<"input value of matrix:"<<endl;
 for(int i=0;i<2;i++)
  for(int j=0;j<3;j++)
   cin>>mat[i][j];
}

void Matrix::display()                                //定义输出数据函数
{for (int i=0;i<2;i++)
  {for(int j=0;j<3;j++)
   {cout<<mat[i][j]<<" ";}
    cout<<endl;}
}

int main()
{Matrix a,b,c;
 a.input();
 b.input();
 cout<<endl<<"Matrix a:"<<endl;
 a.display();
 cout<<endl<<"Matrix b:"<<endl;
 b.display();
 c=a+b;                                         //用重载运算符“+”实现两个
矩阵相加
 cout<<endl<<"Matrix c = Matrix a + Matrix b :"<<endl;
 c.display();
 return 0;
}
```

### 10.5题

```cpp
#include <iostream.h>
//using namespace std;
class Matrix
 {public:
   Matrix();
   friend Matrix operator+(Matrix &,Matrix &);
   friend ostream& operator<<(ostream&,Matrix&);
   friend istream& operator>>(istream&,Matrix&);
  private:
   int mat[2][3];
 };

Matrix::Matrix()
{for(int i=0;i<2;i++)
  for(int j=0;j<3;j++)
   mat[i][j]=0;
}

Matrix operator+(Matrix &a,Matrix &b)
{Matrix c;
 for(int i=0;i<2;i++)
   for(int j=0;j<3;j++)
     {c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
     }
 return c;
}

istream& operator>>(istream &in,Matrix &m)
{cout<<"input value of matrix:"<<endl;
 for(int i=0;i<2;i++)
  for(int j=0;j<3;j++)
   in>>m.mat[i][j];
 return in;
}

ostream& operator<<(ostream &out,Matrix &m)
{for (int i=0;i<2;i++)
  {for(int j=0;j<3;j++)
   {out<<m.mat[i][j]<<" ";}
    out<<endl;}
 return out;
}

int main()
{ Matrix a,b,c;
 cin>>a;
 cin>>b;
 cout<<endl<<"Matrix a:"<<endl<<a<<endl;
 cout<<endl<<"Matrix b:"<<endl<<b<<endl;
 c=a+b;
 cout<<endl<<"Matrix c = Matrix a + Matrix b :"<<endl<<c<<endl;
 return 0;
}
```

### 10.6题

```cpp
#include <iostream>
using namespace std;
class Complex
 {public:
   Complex(){real=0;imag=0;}
   Complex(double r){real=r;imag=0;}
   Complex(double r,double i){real=r;imag=i;}
   operator double(){return real;}
   void display();
  private:
   double real;
   double imag;
 };

void Complex::display()
{cout<<"("<<real<<", "<<imag<<")"<<endl;}

int main()
{Complex c1(3,4),c2;
 double d1;
 d1=2.5+c1;
 cout<<"d1="<<d1<<endl;
 c2=Complex(d1);
 cout<<"c2=";
 c2.display();
 return 0;
}
```

### 10.7题

```cpp
#include <iostream>
using namespace std;
class Student
{public:
  Student(int,char[],char,float);
  int get_num(){return num;}
  char * get_name(){return name;}
  char get_sex(){return sex;}
  void display()

{cout<<"num:"<<num<<"\nname:"<<name<<"\nsex:"<<sex<<"\nscore:"<<score<<"\n
\n";}
 private:
  int num;
  char name[20];
  char sex;
  float score;
};

Student::Student(int n,char nam[],char s,float so)
 {num=n;
  strcpy(name,nam);
  sex=s;
  score=so;
}

class Teacher
 {public:
  Teacher(){}
  Teacher(Student&);
   Teacher(int n,char nam[],char sex,float pay);
   void display();
  private:
   int num;
   char name[20];
   char sex;
   float pay;
 };

Teacher::Teacher(int n,char nam[],char s,float p)
{num=n;
 strcpy(name,nam);
 sex=s;
 pay=p;
}

Teacher::Teacher(Student& stud)
 {num=stud.get_num();
  strcpy(name,stud.get_name());
  sex=stud.get_sex();
  pay=1500;}

void Teacher::display()
{cout<<"num:"<<num<<"\nname:"<<name<<"\nsex:"<<sex<<"\npay:"<<pay<<"\n\n";}


int main()
{Teacher teacher1(10001,"Li",'f',1234.5),teacher2;
 Student student1(20010,"Wang",'m',89.5);
 cout<<"student1:"<<endl;
 student1.display();
 teacher2=Teacher(student1);
 cout<<"teacher2:"<<endl;
 teacher2.display();
 return 0;
}
```

## 第十一章

### 11.1题

```cpp
#include <iostream>
using namespace std;
class Student
{public:
  void get_value()
   {cin>>num>>name>>sex;}
  void display( )
    {cout<<"num: "<<num<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"sex: "<<sex<<endl;}
 private :
   int num;
   char name[10];
   char sex;
};

class Student1: public Student
 {public:
   void get_value_1()
    {get_value();
     cin>>age>>addr;}
   void display_1()
   {   cout<<"age: "<<age<<endl;          //引用派生类的私有成员，正确。
       cout<<"address: "<<addr<<endl;}    //引用派生类的私有成员，正确。
  private:
       int age;
       char addr[30];
 };

int  main()
 {Student1 stud1;
  stud1.get_value_1();
  stud1.display();
  stud1.display_1();
  return 0;
}
```

### 11.2题

```cpp
#include <iostream>
using namespace std;
class Student
{public:
  void get_value()
   {cin>>num>>name>>sex;}
  void display( )
    {cout<<"num: "<<num<<endl;
     cout<<"name: "<<name<<endl;
     cout<<"sex: "<<sex<<endl;}
 private :
   int num;
   char name[10];
   char sex;
};

class Student1: private Student
 {public:
   void get_value_1()
    {get_value();
     cin>>age>>addr;}
   void display_1()
       {display();
       cout<<"age: "<<age<<endl;        //引用派生类的私有成员，正确。
       cout<<"address: "<<addr<<endl;}    //引用派生类的私有成员，正确。
  private:
       int age;
       char addr[30];
 };

int main()
 {Student1 stud1;
  stud1.get_value_1();
  stud1.display_1();
  return 0;
}
```

### 11.3题

```cpp
#include <iostream>
using namespace std;
class Student                        //声明基类
{public:                             //基类公用成员
  void get_value();
  void display( );
 protected :                         //基类保护成员
    int num;
    char name[10];
    char sex;
};

void Student::get_value()
 {cin>>num>>name>>sex;}

void Student::display( )
 {cout<<"num: "<<num<<endl;
  cout<<"name: "<<name<<endl;
  cout<<"sex: "<<sex<<endl;
 }

class Student1: protected Student              //声明一个保护派生类
{public:
   void get_value_1();
   void display1( );
 private:
   int age;
   char addr[30];
};

void Student1::get_value_1()
 {get_value();
  cin>>age>>addr;
 }
void Student1::display1( )
  {cout<<"num: "<<num<<endl;         //引用基类的保护成员
   cout<<"name: "<<name<<endl;       //引用基类的保护成员
   cout<<"sex: "<<sex<<endl;         //引用基类的保护成员
   cout<<"age: "<<age<<endl;         //引用派生类的私有成员
   cout<<"address: "<<addr<<endl;    //引用派生类的私有成员
  }

int main( )
 {Student1 stud1;                      //stud1是派生类student1类的对象
  stud1.get_value_1();                 //调用派生类对象stud1的公用成员函数
  stud1.display1( );                   //调用派生类对象stud1的公用成员函数
  return 0;
 }
```

### 11.4题

```cpp
#include <iostream>
using namespace std;
class Student                        //声明基类
{public:                             //基类公用成员
  void get_value();
  void display( );
 protected :                         //基类保护成员
    int num;
    char name[10];
    char sex;
};

void Student::get_value()
 {cin>>num>>name>>sex;}

void Student::display( )
 {cout<<"num: "<<num<<endl;
  cout<<"name: "<<name<<endl;
  cout<<"sex: "<<sex<<endl;
 }

class Student1: public Student              //声明一个公用派生类
{public:
   void get_value_1();
   void display1( );
 private:
   int age;
   char addr[30];
};

void Student1::get_value_1()
 {get_value();
  cin>>age>>addr;
 }
void Student1::display1( )
  {cout<<"num: "<<num<<endl;         //引用基类的保护成员，合法
   cout<<"name: "<<name<<endl;       //引用基类的保护成员，合法
   cout<<"sex: "<<sex<<endl;         //引用基类的保护成员，合法
   cout<<"age: "<<age<<endl;         //引用派生类的私有成员，合法
   cout<<"address: "<<addr<<endl;    //引用派生类的私有成员，合法
  }

int main( )
 {Student1 stud1;                      //stud1是派生类student1类的对象
  stud1.get_value_1();                 //调用派生类对象stud1的公用成员函数
get_value_1
  stud1.display1( );                   //调用派生类对象stud1的公用成员函数
display1
  return 0;
 }
11.4另一题#include <iostream>
using namespace std;
class Student                        //声明基类
{public:                             //基类公用成员
  void get_value();
  void display( );
 protected :                         //基类保护成员
    int num;
    char name[10];
    char sex;
};

void Student::get_value()
 {cin>>num>>name>>sex;}

void Student::display( )
 {cout<<"num: "<<num<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"sex:"<<sex<<endl;
 }

class Student1: protected Student              //声明一个公用派生类
{public:
   void get_value_1();
   void display1( );
 private:
   int age;
   char addr[30];
};

void Student1::get_value_1()
 {cin>>age>>addr;}

void Student1::display1( )
  {cout<<"age:"<<age<<endl;
   cout<<"address:"<<addr<<endl;
  }

int main( )
 {Student1 stud1;                      //stud1是派生类student1类的对象
  stud1.get_value();
  stud1.get_value_1();
  stud1.display( );
  stud1.display1();                  //合法。display1是派生类中的公用成员函
数
  return 0;
 }
```

### 11.5题

```cpp
class A                   //A为基类
{public:
  void f1( );
  int i;
 protected:
  void f2();
  int j;
 private:
  int k;
};

class B: public A            //B为A的公用派生类
{public:
  void f3( );
 protected:
  int m;
 private:
  int n;
};

class C: public B              //C为B的公用派生类
{public:
  void f4();
 private:
  int p;
};

int main()
{A a1;                         //a1是基类A的对象
 B b1;                         //b1是派生类B的对象
 C c1;                         //c1是派生类C的对象
 return 0;
}
```

### 11.6题

```cpp
#include <iostream>
using namespace std;
class A
{public:
  void f1( );
 protected:
  void f2();
 private:
  int i;
};

class B: public A
{public:
  void f3( );
  int k;
 private:
  int m;
};

class C: protected B
{public:
  void f4();
 protected:
  int n;
 private:
  int p;
};

class D: private C
{public:
  void f5();
 protected:
  int q;
 private:
  int r;
};

int main()
{A a1;
 B b1;
 C c1;
 D d1;
 return 0;
}
```

### 11.7题

```cpp
#include <iostream>
using namespace std;
class A
 {
  public:
   A(){a=0;b=0;}
   A(int i){a=i;b=0;}
   A(int i,int j){a=i;b=j;}
   void display(){cout<<"a="<<a<<" b="<<b;}
  private:
   int a;
   int b;
 };

class B  : public A
 {
  public:
   B(){c=0;}
   B(int i):A(i){c=0;}
   B(int i,int j):A(i,j){c=0;}
   B(int i,int j,int k):A(i,j){c=k;}
   void display1()
    {display();
     cout<<" c="<<c<<endl;
    }
   private:
    int c;
};

int main()
{   B b1;
    B b2(1);
    B b3(1,3);
    B b4(1,3,5);
    b1.display1();
    b2.display1();
    b3.display1();
    b4.display1();
	return 0;
}
```

### 11.8题

```cpp
#include <iostream>
using namespace std;
class A
 {
  public:
   A(){cout<<"constructing A "<<endl;}
   ~A(){cout<<"destructing A "<<endl;}
 };

class B  : public A
 {
  public:
   B(){cout<<"constructing B "<<endl;}
   ~B(){cout<<"destructing B "<<endl;}
};

class C  : public B
 {
  public:
   C(){cout<<"constructing C "<<endl;}
   ~C(){cout<<"destructing C "<<endl;}
};
int main()
{ C c1;
  return 0;
}
```

### 11.9题

```cpp
#include<string>
#include <iostream>
using namespace std;
class Teacher
 {public:
   Teacher(string nam,int a,char s,string tit,string ad,string t);
   void display();
  protected:
    string name;
    int age;
    char sex;
    string title;
    string addr;
    string tel;
};

Teacher::Teacher(string nam,int a,char s,string tit,string ad,string t):
     name(nam),age(a),sex(s),title(tit),addr(ad),tel(t){ }
void Teacher::display()
     {cout<<"name:"<<name<<endl;
      cout<<"age"<<age<<endl;
      cout<<"sex:"<<sex<<endl;
      cout<<"title:"<<title<<endl;
      cout<<"address:"<<addr<<endl;
      cout<<"tel:"<<tel<<endl;
      }

class Cadre
 {public:
   Cadre(string nam,int a,char s,string p,string ad,string t);
   void display();
  protected:
   string name;
   int age;
   char sex;
   string post;
   string addr;
   string tel;
 };

Cadre::Cadre(string nam,int a,char s,string p,string ad,string t):
     name(nam),age(a),sex(s),post(p),addr(ad),tel(t){}

void Cadre::display()
    {cout<<"name:"<<name<<endl;
     cout<<"age:"<<age<<endl;
     cout<<"sex:"<<sex<<endl;
     cout<<"post:"<<post<<endl;
     cout<<"address:"<<addr<<endl;
     cout<<"tel:"<<tel<<endl;
    }

class Teacher_Cadre:public Teacher,public Cadre
 {public:
   Teacher_Cadre(string nam,int a,char s,string tit,string p,string
ad,string t,float w);
   void show( );
  private:
    float wage;
 };

Teacher_Cadre::Teacher_Cadre(string nam,int a,char s,string t,string
p,string ad,string tel,float w):
  Teacher(nam,a,s,t,ad,tel),Cadre(nam,a,s,p,ad,tel),wage(w) {}
void Teacher_Cadre::show( )
    {Teacher::display();
     cout<<"post:"<<Cadre::post<<endl;
     cout<<"wages:"<<wage<<endl;
     }

int main( )
 {Teacher_Cadre te_ca("Wang-li",50,'f',"prof.","president","135 Beijing
Road,Shanghai","(021)61234567",1534.5);
  te_ca.show( );
  return 0;
}
```

### 11.10题

```cpp
#include <iostream>
#include <cstring>
using namespace std;
class Teacher                                //教师类
 {public:
    Teacher(int,char [],char);               //声明构造函数
    void display();                          //声明输出函数
  private:
   int num;
   char name[20];
   char sex;
  };

Teacher::Teacher(int n,char nam[],char s)    //定义构造函数
 {num=n;
  strcpy(name,nam);
  sex=s;
}

void Teacher::display()                      //定义输出函数
 {cout<<"num:"<<num<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"sex:"<<sex<<endl;
}

class BirthDate                               //生日类
 {public:
    BirthDate(int,int,int);                   //声明构造函数
    void display();                           //声明输出函数
    void change(int,int,int);                 //声明修改函数
  private:
    int year;
    int month;
    int day;
};

BirthDate::BirthDate(int y,int m,int d)       //定义构造函数
 {year=y;
  month=m;
  day=d;
 }

void BirthDate::display()                     //定义输出函数
 {cout<<"birthday:"<<month<<"/"<<day<<"/"<<year<<endl;}

void BirthDate::change(int y,int m,int d)     //定义修改函数
 {year=y;
  month=m;
  day=d;
 }

class Professor:public Teacher                         //教授类
 {public:
    Professor(int,char [],char,int,int,int,float);    //声明构造函数
    void display();                                   //声明输出函数
    void change(int,int,int);                         //声明修改函数
   private:
    float area;
    BirthDate birthday;                               //定义BirthDate类的对
象作为数据成员
 };

Professor::Professor(int n,char nam[20],char s,int y,int m,int d,float a):
 Teacher(n,nam,s),birthday(y,m,d),area(a){ }          //定义构造函数

void Professor::display()                             //定义输出函数
{Teacher::display();
 birthday.display();
 cout<<"area:"<<area<<endl;
}

void Professor::change(int y,int m,int d)             //定义修改函数
 {birthday.change(y,m,d);
 }

int main()
{Professor prof1(3012,"Zhang",'f',1949,10,1,125.4);   //定义Professor对象
prof1
 cout<<endl<<"original data:"<<endl;
 prof1.display();                                     //调用prof1对象的
display函数
 cout<<endl<<"new data:"<<endl;
 prof1.change(1950,6,1);                              //调用prof1对象的
change函数
 prof1.display();                                     //调用prof1对象的
display函数
 return 0;
}




//习题12.1中的circle.cpp文件
//CIRCLE.CPP
//#include <iostream.h>
Circle::Circle(float a,float b,float r):Point(a,b),radius(r){}

void Circle::setRadius(float r)
{radius=r;}

float Circle::getRadius() const {return radius;}

float Circle::area() const
{return 3.14159*radius*radius;}

ostream &operator<<(ostream &output,const Circle &c)
{output<<"Center=["<<c.x<<","<<c.y<<"], r="<<c.radius<<", area="<<c.area()
<<endl;
 return output;
}

//习题12.1中的circle.h文件
//CIRCLE.H
#include "point.h"
class Circle:public Point
{public:
  Circle(float x=0,float y=0,float r=0);
  void setRadius(float);
  float getRadius() const;
  float area () const;
  friend ostream &operator<<(ostream &,const Circle &);
 protected:
  float radius;
};

//习题12.1中的cylinder.cpp文件
//CYLINDER.CPP
Cylinder::Cylinder(float a,float b,float r,float h)
    :Circle(a,b,r),height(h){}

void Cylinder::setHeight(float h){height=h;}

float Cylinder::getHeight() const {return height;}

float Cylinder::area() const
{ return 2*Circle::area()+2*3.14159*radius*height;}

float Cylinder::volume() const
{return Circle::area()*height;}

ostream &operator<<(ostream &output,const Cylinder& cy)
{output<<"Center=["<<cy.x<<","<<cy.y<<"], r="<<cy.radius<<", h="<<cy.height
       <<"\narea="<<cy.area()<<", volume="<<cy.volume()<<endl;
 return output;
}

//习题12.1中的cylinder.h头文件
//CYLINDER.H
#include "circle.h"
class Cylinder:public Circle
{public:
  Cylinder (float x=0,float y=0,float r=0,float h=0);
  void setHeight(float);
  float getHeight() const;
  float area() const;
  float volume() const;
  friend ostream& operator<<(ostream&,const Cylinder&);
 protected:
  float height;
};

//习题12.1中的point.cpp文件
//POINT.CPP
Point::Point(float a,float b)
{x=a;y=b;}
void Point::setPoint(float a,float b)
{x=a;y=b;}
ostream & operator<<(ostream &output,const Point &p)
{output<<"["<<p.x<<","<<p.y<<"]"<<endl;
 return output;
}

//习题12.1中的point.h头文件
//POINT.H
class Point
{public:
  Point(float=0,float=0);
  void setPoint(float,float);
  float getX() const {return x;}
  float getY() const {return y;}
  friend ostream & operator<<(ostream &,const Point &);
 protected:
  float x,y;
};
```

## 第十二章

### 12.1题

```cpp
#include <iostream>     //如用VC++应改为∶#include  <iosttram.h>
using namespace std;    //如用VC++应取消此行
#include "cylinder.h"
#include "point.cpp"
#include "circle.cpp"
#include "cylinder.cpp"
int main()
{Cylinder cy1(3.5,6.4,5.2,10);
 cout<<"\noriginal cylinder:\nx="<<cy1.getX()<<", y="<<cy1.getY()<<", r="
     <<cy1.getRadius()<<", h="<<cy1.getHeight()<<"\narea="<<cy1.area()
     <<", volume="<<cy1.volume()<<endl;
 cy1.setHeight(15);
 cy1.setRadius(7.5);
 cy1.setPoint(5,5);
 cout<<"\nnew cylinder:\n"<<cy1;
 Point &pRef=cy1;
 cout<<"\npRef as a point:"<<pRef;
 Circle &cRef=cy1;
 cout<<"\ncRef as a Circle:"<<cRef;
 return 0;
}
```

### 12.3题

```cpp
#include <iostream>
using namespace std;
class Point
{public:
  Point(float a,float b):x(a),y(b){}
  ~Point(){cout<<"executing Point destructor"<<endl;}
 private:
  float x;
  float y;
};

class Circle:public Point
{public:
Circle(float a,float b,float r):Point(a,b),radius(r){}
  ~Circle(){cout<<"executing Circle destructor"<<endl;}
 private:
  float radus;
};

int main()
{Point *p=new Circle(2.5,1.8,4.5);
 delete p;
 return 0;
}
```

### 12.3题另一解

```cpp
#include <iostream>
using namespace std;
class Point
{public:
  Point(float a,float b):x(a),y(b){}
  ~Point(){cout<<"executing Point destructor"<<endl;}
 private:
  float x;
  float y;
};

class Circle:public Point
{public:
Circle(int a,int b,int r):Point(a,b),radius(r){}
  ~Circle(){cout<<"executing Circle destructor"<<endl;}
 private:
  float radus;
};

int main()
{Point *p=new Circle(2.5,1.8,4.5);
 Circle *pt=new Circle(2.5,1.8,4.5);
 delete pt;
 return 0;
}
```

### 12.3题另一解

```cpp
#include <iostream>
using namespace std;
class Point
{public:
  Point(float a,float b):x(a),y(b){}
  virtual ~Point(){cout<<"executing Point destructor"<<endl;}
 private:
  float x;
  float y;
};

class Circle:public Point
{public:
Circle(float a,float b,float r):Point(a,b),radius(r){}
  virtual ~Circle(){cout<<"executing Circle destructor"<<endl;}
 private:
  float radus;
};

void main()
{Point *p=new Circle(2.5,1.8,4.5);
 delete p;
}
```

### 12.4题

```cpp
#include <iostream>
using namespace std;
//定义抽象基类Shape
class Shape
{public:
 virtual double area() const =0;            //纯虚函数
};

//定义Circle类
class Circle:public Shape
{public:
Circle(double r):radius(r){}                                     //结构函数
  virtual double area() const {return 3.14159*radius*radius;};   //定义虚函
数
 protected:
  double radius;                                                 //半径
};

//定义Rectangle类
class Rectangle:public Shape
{public:
 Rectangle(double w,double h):width(w),height(h){}               //结构函数
 virtual double area() const {return width*height;}              //定义虚函
数
 protected:
  double width,height;                                           //宽与高
};

class Triangle:public Shape
{public:
  Triangle(double w,double h):width(w),height(h){}                //结构函
数
  virtual double area() const {return 0.5*width*height;}          //定义虚
函数
 protected:
  double width,height;                                            //宽与高
};

//输出面积的函数
void printArea(const Shape &s)
{cout<<s.area()<<endl;}                                            //输出s
的面积

int main()
{
 Circle circle(12.6);                                             //建立
Circle类对象circle
 cout<<"area of circle    =";
 printArea(circle);                                               //输出
circle的面积
 Rectangle rectangle(4.5,8.4);                                    //建立
Rectangle类对象rectangle
 cout<<"area of rectangle =";
 printArea(rectangle);                                            //输出
rectangle的面积
 Triangle triangle(4.5,8.4);                                      //建立
Triangle类对象
 cout<<"area of triangle  =";
 printArea(triangle);           //输出triangle的面积
 return 0;
}
```

### 12.5题

```cpp
#include <iostream>
using namespace std;
//定义抽象基类Shape
class Shape
{public:
 virtual double area() const =0;                                //纯虚函数
};

//定义Circle(圆形)类
class Circle:public Shape
{public:
Circle(double r):radius(r){}                                     //结构函数
  virtual double area() const {return 3.14159*radius*radius;};   //定义虚函
数
 protected:
  double radius;                                                 //半径
};

//定义Square(正方形)类
class Square:public Shape
{public:
  Square(double s):side(s){}                                     //结构函数
  virtual double area() const {return side*side;}                //定义虚函
数
 protected:
  double side;
};

//定义Rectangle(矩形)类
class Rectangle:public Shape
{public:
 Rectangle(double w,double h):width(w),height(h){}               //结构函数
 virtual double area() const {return width*height;}              //定义虚函
数
 protected:
  double width,height;                                           //宽与高
};

//定义Trapezoid(梯形)类
class Trapezoid:public Shape
{public:
  Trapezoid(double t,double b,double h):top(t),bottom(t),height(h){} //结构
函数
  virtual double area() const {return 0.5*(top+bottom)*height;}      //定义
虚函数
 protected:
  double top,bottom,height;                                          //上底
、下底与高
};

//定义Triangle(三角形)类
class Triangle:public Shape
{public:
  Triangle(double w,double h):width(w),height(h){}                //结构函
数
  virtual double area() const {return 0.5*width*height;}          //定义虚
函数
 protected:
  double width,height;                                            //宽与高
};

int main()
{
 Circle circle(12.6);                                             //建立
Circle类对象circle
 Square square(3.5);                                              //建立
Square类对象square
 Rectangle rectangle(4.5,8.4);                                    //建立
Rectangle类对象rectangle
 Trapezoid trapezoid(2.0,4.5,3.2);                                //建立
Trapezoid类对象trapezoid
 Triangle triangle(4.5,8.4);                                      //建立
Triangle类对象
 Shape *pt[5]={&circle,&square,&rectangle,&trapezoid,&triangle};
                                              //定义基类指针数组pt，使它每
一个元素指向一个派生类对象
 double areas=0.0;                                                //areas为
总面积
 for(int i=0;i<5;i++)
  {areas=areas+pt[i]->area();}
 cout<<"totol of all areas="<<areas<<endl;   //输出总面积
 return 0;
}
```

## 第十三章

### 13.1题

```cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{double a,b,c,s,area;
 cout<<"please input a,b,c:";
 cin>>a>>b>>c;
 if (a+b<=c)
  cerr<<"a+b<=c,error!"<<endl;
 else if(b+c<=a)
  cerr<<"b+c<=a,error!"<<endl;
 else if (c+a<=b)
  cerr<<"c+a<=b,error!"<<endl;
 else
  {s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<"area="<<area<<endl;}
 return 0;
}
```

### 13.1题另一解

```cpp
#include <iostream>
#include <cmath>
using namespace std;

void input(double a,double b,double c)
{cout<<"please input a,b,c:";
 cin>>a>>b>>c;
}
void area(double a,double b,double c)
{double s,area;
 if (a+b<=c)
  cerr<<"a+b<=c,error!"<<endl;
 else if(b+c<=a)
  cerr<<"b+c<=a,error!"<<endl;
 else if (c+a<=b)
  cerr<<"c+a<=b,error!"<<endl;
 else
  {s=(a+b+c)/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<"area="<<area<<endl;}
}
int main()
{double a=2,b=3,c=5;
 input(a,b,c);
 area(a,b,c);
 return 0;
}
```

### 13.2题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{float a[5];
 cout<<"input data:";
 for(int i=0;i<5;i++)
  cin>>a[i];
 cout<<setiosflags(ios::fixed)<<setprecision(2);
 for(i=0;i<5;i++)
  cout<<setw(10)<<a[i]<<endl;
 return 0;
}

13.2题另一解
#include <iostream>
using namespace std;
int main()
{float a[5];
 int i;
 cout<<"input data:";
 for(i=0;i<5;i++)
  cin>>a[i];
 cout.setf(ios::fixed);
 cout.precision(2);
 for(i=0;i<5;i++)
  {cout.width(10);
   cout<<a[i]<<endl;}
 return 0;
}
```

### 13.3题

```cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 for(int n=1;n<8;n++)
 cout<<setw(20-n)<<setfill(' ')<<" "        //nm
     <<setw(2*n-1)<<setfill('B')<<"B"<<endl;
 return 0;
}
```

### 13.4题

```cpp
#include <iostream>
#include <fstream>
using namespace std;                //VC++ 6.0要此行
//fun1函数从键盘输入20个整数，分别存放在两个磁盘文件中

void fun1()
{int a[10];
 ofstream outfile1("f1.dat"),outfile2("f2.dat");  //分别定义两个文件流对象
 if(!outfile1)                        //检查打开f1.dat是否成功
  {cerr<<"open f1.dat error!"<<endl;
   exit(1);
  }
 if(!outfile2)                        //检查打开f2.dat是否成功
  {cerr<<"open f2.dat error!"<<endl;
   exit(1);
  }
 cout<<"enter 10 integer numbers:"<<endl;
 for(int i=0;i<10;i++)          //输入10个数存放到f1.dat文件中
  {cin>>a[i];
   outfile1<<a[i]<<" ";}
  cout<<"enter 10 integer numbers:"<<endl;
 for(i=0;i<10;i++)           //输入10个数存放到f2.dat文件中
  {cin>>a[i];
   outfile2<<a[i]<<" ";}
 outfile1.close();               //关闭f1.dat文件
 outfile2.close();               //关闭f2.dat文件
}

//从f1,dat读入10个数，然后存放到f2.dat文件原有数据的后面
void fun2()
{ifstream infile("f1.dat");       //f1.dat作为输入文件
 if(!infile)
  {cerr<<"open f1.dat error!"<<endl;
   exit(1);
  }
  ofstream outfile("f2.dat",ios::app);
 //f2.dat作为输出文件，文件指针指向文件尾，向它写入的数据放在原来数据的后面
  if(!outfile)
   {cerr<<"open f2.dat error!"<<endl;
   exit(1);
  }
  int a;
  for(int i=0;i<10;i++)
   {infile>>a;           //磁盘文件f2.dat读入一个整数
    outfile<<a<<" ";     //将该数存放到f2.dat中
   }
  infile.close();
  outfile.close();
 }

//从f2.dat中读入20个整数，将它们按从小到大的顺序存放到f2.dat
void fun3()
{ifstream infile("f2.dat"); //定义输入文件流infile，以输入方式打开f2.dat
 if(!infile)
  {cerr<<"open f2.dat error!"<<endl;
   exit(1);
  }
 int a[20];
 int i,j,t;
 for(i=0;i<20;i++)
  infile>>a[i];        //从磁盘文件f2.dat读入20个数放在数组a中
 for(i=0;i<19;i++)     //用起泡法对20个数排序
   for(j=0;j<19-i;j++)
      if(a[j]>a[j+1])
        {t=a[j];a[j]=a[j+1];a[j+1]=t;}
  infile.close();                //关闭输入文件f2.dat
  ofstream outfile("f2.dat",ios::out);
// f2.dat作为输出文件，文件中原有内容删除
  if(!outfile)
   {cerr<<"open f2.dat error!"<<endl;
    exit(1);}
cout<<"data in f2.dat:"<<endl;
  for( i=0;i<20;i++)
    {outfile<<a[i]<<" ";      //向f2.dat输出已排序的20个数
     cout<<a[i]<<" ";}        //同时输出到显示器
  cout<<endl;
  outfile.close();
}

int main()
{fun1();                     //分别调用3个函数
 fun2();
 fun3();
 return 0;
}
```

### 13.5题

```cpp
#include <iostream>
#include <fstream>
using namespace std;
struct staff
{int num;
 char name[20];
 int age;
 double  pay;
};
int main()
{staff staf[7]={2101,"Li",34,1203,2104,"Wang",23,674.5,2108,"Fun",54,778,
                  3006,"Xue",45,476.5,5101,"Ling",39,656.6},staf1;
 fstream iofile("staff.dat",ios::in|ios::out|ios::binary);
 if(!iofile)
  {cerr<<"open error!"<<endl;
   abort();
  }
 int i,m,num;
 cout<<"Five staff :"<<endl;
 for(i=0;i<5;i++)
   {cout<<staf[i].num<<" "<<staf[i].name<<" "<<staf[i].age<<" "<<staf
[i].pay<<endl;
    iofile.write((char *)&staf[i],sizeof(staf[i]));}
 cout<<"please input data you want insert:"<<endl;
 for(i=0;i<2;i++)
   {cin>>staf1.num>>staf1.name>>staf1.age>>staf1.pay;
    iofile.seekp(0,ios::end);
    iofile.write((char *)&staf1,sizeof(staf1));}
  iofile.seekg(0,ios::beg);
  for(i=0;i<7;i++)
   {iofile.read((char *)&staf[i],sizeof(staf[i]));
    cout<<staf[i].num<<" "<<staf[i].name<<" "<<staf[i].age<<" "<<staf
[i].pay<<endl;
   }
 bool find;
 cout<<"enter number you want search,enter 0 to stop.";
 cin>>num;
 while(num)
 {find=false;
  iofile.seekg(0,ios::beg);
  for(i=0;i<7;i++)
   {iofile.read((char *)&staf[i],sizeof(staf[i]));
    if(num==staf[i].num)
     {m=iofile.tellg();
      cout<<num<<" is No."<<m/sizeof(staf1)<<endl;
      cout<<staf[i].num<<" "<<staf[i].name<<" "<<staf[i].age<<" "<<staf
[i].pay<<endl;
      find=true;
      break;
     }
   }
  if(!find)
    cout<<"can't find "<<num<<endl;
  cout<<"enter number you want search,enter 0 to stop.";
  cin>>num;
 }
  iofile.close();
  return 0;
}
```


### 13.6题

```cpp
#include <iostream>
#include <strstream>
using namespace std;

struct student
{int num;
 char name[20];
 double score;
};
int main()
{student stud[3]={1001,"Li",78,1002,"Wang",89.5,1004,"Fun",90},stud1[3];
 char c[50];
 int i;
 ostrstream strout(c,50);
 for(i=0;i<3;i++)
  strout<<stud[i].num<<" "<<stud[i].name<<" "<<stud[i].score<<" ";
 strout<<ends;
 cout<<"array c:"<<endl<<c<<endl<<endl;
 istrstream strin(c,50);
 for(i=0;i<3;i++)
  strin>>stud1[i].num>>stud1[i].name>>stud1[i].score;
 cout<<"data from array c to array stud1:"<<endl;
 for(i=0;i<3;i++)
  cout<<stud1[i].num<<" "<<stud1[i].name<<" "<<stud1[i].score<<endl;
 cout<<endl;
 return 0;
}
```

### 13.6题另一题

```cpp
#include <iostream>
#include <strstream>
using namespace std;
struct student
{int num;
 char name[20];
 double score;
};
int main()
{int i;
 student stud[3]={1001,"Li",78,1002,"Wang",89.5,1004,"Fun",90},stud1[3];
 char c[50];
 strstream strio(c,50,ios::in|ios::out);
 for(i=0;i<3;i++)
  strio<<stud[i].num<<" "<<stud[i].name<<" "<<stud[i].score<<" ";
 strio<<ends;
 cout<<"array c:"<<endl<<c<<endl<<endl;
 for(i=0;i<3;i++)
  strio>>stud1[i].num>>stud1[i].name>>stud1[i].score;
 cout<<"data from array c to array stud1:"<<endl;
 for(i=0;i<3;i++)
  cout<<stud1[i].num<<" "<<stud1[i].name<<" "<<stud1[i].score<<endl;
 cout<<endl;
 return 0;
}
```

## 第十四章

### 14.1题

```cpp
#include <iostream>
#include <cmath>
using namespace std;
double q(double,double,double);
void main()
{double a,b,c,p,x1,x2;
 cout<<"please enter a,b,c:";
 cin>>a>>b>>c;
 p=-b/(2*a);
 try
  {x1=p+q(a,b,c);
   x2=p-q(a,b,c);
   cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
  }
 catch(double d)
   {cout<<"a="<<a<<",b="<<b<<",c="<<c<<",disc="<<d<<",error!"<<endl;}
 cout<<"end"<<endl;
}

double q(double a,double b,double c)
 {double disc;
  disc=b*b-4*a*c;
  if (disc<0) throw disc;
  return sqrt(disc)/(2*a);
 }
```

### 14.2题

```cpp
#include <iostream>
#include <string>
using namespace std;
class Student
 {public:
   Student(int n,string nam)
    {cout<<"constructor-"<<n<<endl;
     num=n;name=nam;}
   ~Student(){cout<<"destructor-"<<num<<endl;}
   void get_data();
  private:
   int num;
   string name;
 };
void Student::get_data()
 {if(num==0) throw num;
  else cout<<num<<" "<<name<<endl;
  cout<<"in get_data()"<<endl;
 }

void fun()
{Student stud1(1101,"tan");
 stud1.get_data();
 try
  {Student stud2(0,"Li");
   stud2.get_data();
  }
 catch(int n)
  {cout<<"num="<<n<<",error!"<<endl;}
}
int main()
{cout<<"main begin"<<endl;
 cout<<"call fun()"<<endl;
 fun();
 cout<<"main end"<<endl;
 return 0;
}
```

### 14.3题

```cpp
//main file
#include <iostream>
using namespace std;
#include "xt14-3-h1.h"
#include "xt14-3-h2.h"
using namespace std;
using namespace student1;

int main()
 {Student stud1(1001,"Wang",18,"123 Beijing Road,Shanghua");
  stud1.show_data();
  student2::Student stud2(1102,"Li",'f',89.5);
  stud2.show_data();
  return 0;
 }
```

### 14.3题 H1

```cpp
//header1.h
#include <string>
namespace student1
 {class Student
    {public:
      Student(int n,string nam,int a,string addr)
       {num=n;name=nam;age=a;address=addr;}
      void show_data();
     private:
      int num;
      string name;
      int age;
      string address;
    };
  void Student::show_data()
    {cout<<"num:"<<num<<"  name:"<<name<<"  age:"<<age
         <<"  address:"<<address<<endl;
    }
 }
```

### 14.3题H2

```cpp
#include <string>
namespace student2
 {class Student
   {public:
     Student(int n,string nam,char s,float sco)
       {num=n;name=nam;sex=s;score=sco;}
     void show_data();
    private:
     int num;
     string name;
     char sex;
     float score;
   };
  void Student::show_data()
   {cout<<"num:"<<num<<"  name:"<<name<<" sex:"<<sex
        <<"   score:"<<score<<endl; }
 }
```
