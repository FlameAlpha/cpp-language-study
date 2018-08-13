#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
 
#define ListSize 3000
#define TableSize ListSize*5/4
#define  NULLKEY  0
 
typedef int KeyType;
 
typedef struct
{
KeyType key;
}RecordType;
 
typedef struct node
{
KeyType key;
struct node *lchild,*rchild;
}BSTNode,*BSTree;
 
typedef struct
{
KeyType r[ListSize+1];
int Length;
}RecordList;
 
typedef struct  //索引表结点
{
int key;     //最大关键字域
int link;    //指向本块第一个结点的位置
}Index;
 
typedef struct   //顺序表结点
{
int key;     //关键字域
}Dexlist;
 
typedef struct Node{
int data;
struct Node *next;
}Node;
 
typedef RecordType HashTable[TableSize];
Dexlist dexlist[ListSize+1];
Index index[10];
RecordList list;
HashTable hashtable;
BSTree *bst;
Node **A;
 
int SeqSearch(RecordList l,KeyType k);
void InSort(RecordList *l,int length);
int BinSrch(RecordList l,KeyType k);
void InsertBST(BSTree *bst, KeyType x);
void CreateBST(BSTree *bst,RecordList list);
int SearchBST(BSTree bst,KeyType key);
int CreatIndex(Dexlist dl[],Index index[],RecordList list);
int IndexSearch(Dexlist r[],Index index[],int key);
int Hash(KeyType k);
void CreatHashTable(RecordList l,int SIZE);
int  HashSearch(HashTable ht, KeyType K,int SIZE);
void InitHash(Node **Q);
void InsertHash(Node **Q,int value);
int SearchHash(Node **Q,int value);
 
int CaseChoice(int choice,int x)
{
int i,k=0,flag=0;
bst=(BSTree *)malloc(sizeof(BSTree));
if(choice==1)
{
k=SeqSearch(list,x);
return k;
}
else if(choice==2)
{
InSort(&list,ListSize);
k=BinSrch(list,x);
return k;
}
else if(choice==3)
{
CreateBST(bst,list);
k=SearchBST(*bst,x);
return k;
}
else if(choice==4)
{
flag=CreatIndex(dexlist,index,list);
if(!flag)
{
printf("\n\n对不起！索引表创建失败\n");
exit(0);
}
k=IndexSearch(dexlist,index,x);
return k;
}
else if(choice==5)
{
CreatHashTable(list,TableSize);
k=HashSearch(hashtable,x,TableSize);
return k;
}
else if(choice==6)
{
A=(Node **)malloc(sizeof(Node*)*10); //申请一个指针型数组A[n]
InitHash(A);//初始化数组A
for(i=1;i<=ListSize;i++)
InsertHash(A,list.r[i]);//print_hash(A,n);
k=SearchHash(A,x);
return k;
}
else if(choice==7)
exit(0);
else
{
printf("\n    输入错误！\n");
exit(0);
}
}
 
void main()
{
int i,j,x,choice,k=0;
list.Length=ListSize;
srand((unsigned)time(NULL));
double runtime;
int T=0,F=0;
int success[ListSize],fail[ListSize];
long dwStart,dwEnd;
do{
printf("\n\n=========六种查找算法效率比较=========");//
printf("\n\n	1. 顺序查找");
printf("\n\n        2. 折半查找");
printf("\n\n        3. 二叉树查找");
printf("\n\n        4. 索引查找");
printf("\n\n        5. 开地址法哈希查找(α=0.8)");
printf("\n\n        6. 拉链法哈希查找");
printf("\n\n        7. 退出\n");
printf("\n======================================");
printf("\n    请输入您的选择 (1,2,3,4,5,6,7)：");
scanf("%d",&choice);
for(i=0;i<ListSize;i++)
{
j=1+(unsigned)(10000.0*rand()/(RAND_MAX+1.0));
list.r[i]=j;
}
bst=(BSTree *)malloc(sizeof(BSTree));
srand((unsigned)time(NULL));
for(i=0;i<ListSize;i++)
{
j=1+(unsigned)(10000.0*rand()/(RAND_MAX+1.0));
x=j;
k=CaseChoice(choice,x);
if(k==0)
{
fail[F]=x;
F++;
}
else
{
success[T]=x;
T++;
}
}
 
dwStart=GetTickCount();
for(i=0;i<F;i++)
k=CaseChoice(choice,fail[i]);
dwEnd=GetTickCount();
runtime=(double)(dwEnd-dwStart)/F;
printf("\n     查找了%d个数的数组，该种查找算法的平均查找失败时间是：%lf ms\n",ListSize,runtime);
 
dwStart=GetTickCount();
for(i=0;i<T;i++)
k=CaseChoice(choice,success[i]);
dwEnd=GetTickCount();
runtime=(double)(dwEnd-dwStart)/T;
printf("\n     查找了%d个数的数组，该种查找算法的平均查找成功时间是：%lf ms\n\n",ListSize,runtime);
}while(choice!=7);
}
 
 
int SeqSearch(RecordList l,KeyType k)
/*在顺序表l中顺序查找其关键字等于k的元素，若找到，则函数值为该元素在表中的位置，否则为0*/
{
int i;
l.r[0]=k;
i=l.Length;
while(l.r[i]!=k)
i--;
return(i);
}   //顺序查找
 
void InSort(RecordList *l,int length)
/* 对记录数组r做直接插入排序，length为数组中待排序记录的数目*///直接插入排序
{
int i,j;
for(i=2;i<=length;i++)
{
l->r[0]=l->r[i];//将待插入记录存放到监视哨r[0]中
j=i-1;
while(l->r[0]<l->r[j])/* 寻找插入位置 */
{
l->r[j+1]= l->r[j];
j=j-1;
}
l->r[j+1]=l->r[0]; /*将待插入记录插入到已排序的序列中*/
}
}   //插入排序
 
int BinSrch(RecordList l,KeyType k)
/*在有序表l中折半查找其关键字等于k的元素，若找到，则函数值为该元素在表中的位置*/
{
int low,high,mid;
low=1;
high=l.Length;/*置区间初值*/
while(low<=high)
{
mid=(low+high)/2;
if(k==l.r[mid])
return(mid);/*找到待查元素*/
else
if(k<l.r[mid])
high=mid-1;/*未找到，则继续在前半区间进行查找*/
else
low=mid+1;/*继续在后半区间进行查找*/
}
return (0);
}   //折半查找
 
void InsertBST(BSTree *bst,KeyType x)
/*若在二叉排序树中不存在关键字等于key的元素，插入该元素*/
{
BSTree s;
if(*bst==NULL)/*递归结束条件*/
{
s=(BSTree)malloc(sizeof(BSTNode));/*申请新的结点s*/
s->key=x;
s->lchild=NULL;
s->rchild=NULL;
*bst=s;
}
else
if(x<(*bst)->key)
InsertBST(&((*bst)->lchild),x);/*将s插入左子树*/
else
if(x>(*bst)->key)
InsertBST(&((*bst)->rchild), x); /*将s插入右子树*/
}
void CreateBST(BSTree *bst,RecordList list)
{
int i;
*bst = NULL;
for(i=1;i<=ListSize;i++)
{
InsertBST(bst,list.r[i]);
}
}
int SearchBST(BSTree bst,KeyType key)/*返回1成功，返回0失败*/
{
BSTree q;
q=bst;
while(q)
{
if(q->key==key)
return 1;
if(q->key>key)
q=q->lchild;
else
q=q->rchild;
}
return 0;
}   //二叉查找
 
int CreatIndex(Dexlist dexlist[],Index index[],RecordList list)
{
int m,n,i;
int number[10];
for(i=1;i<=10;i++)
index[i-1].key=1000*i;
for(i=1;i<=10;i++)
number[i-1]=0;
index[0].link=1;
for(m=1;m<=ListSize;m++)
{
i=0;
while((list.r[m]>index[i].key)&&(i<10))
i++;
number[i]++;
}
for(n=1;n<10;n++)
index[n].link=index[n-1].link+number[n-1];
 
for(m=1;m<=ListSize;m++)
{
i=0;
while((list.r[m]>index[i].key)&&(i<10))
i++;
n=index[i].link;
dexlist[n].key=list.r[m];
index[i].link++;
}
m--;
if(m==ListSize)
return 1;
else
return 0;
}
int IndexSearch(Dexlist r[],Index index[],int key)//key 为给定值，索引表为index[1]..index[b]    
{
int i,j;
i=0;
while((key>index[i].key)&&(i<10))
i++;
if(i>=10)
{
return 0;
}
if(i>0)
j=index[i-1].link;
else
j=index[0].link;
while((j<ListSize)&&(key!=r[j].key)&&(r[j].key<=index[i].key))
j++;
if(key==r[j].key)
return 1;
else
return 0;
}   //索引查找
 
int Hash(KeyType k)
{
int h;
h=k%(TableSize);
return h;
}
void CreatHashTable(RecordList l,int SIZE)
{
int i,j,hj,t;
int p;
for(i=0;i<SIZE;i++)
{
hashtable[i].key=NULLKEY;
}
for(i=1;i<=ListSize;i++)
{
fflush(stdin);
p=l.r[i];
j=Hash(p);
if(hashtable[j].key==NULLKEY)
hashtable[j].key=p;
else
{
for(t=1;t<SIZE;t++)
{
hj=(j+t)%(SIZE);
if(hashtable[hj].key==NULLKEY)
{
hashtable[hj].key=p;
t=SIZE;
}
}
 
}
}
}
int HashSearch(HashTable ht, KeyType K,int SIZE)
{
int h0;
int i;
int hi;
h0=Hash(K);
if(ht[h0].key==NULLKEY)
return 0;
else
if(ht[h0].key==K)
return 1;
else/* 用线性探测再散列解决冲突 */
{
for(i=0;i<SIZE-1;i++)
{
hi=(h0+i)%SIZE;
if(ht[hi].key==NULLKEY)
return 0;
else
if(ht[hi].key==K)
return 1;
}
return 0;
}
}   //开地址法哈希查找
 
void InitHash(Node **A)
{
int i;
for(i=0;i<15;i++)
{
A[i]=(Node *)malloc(sizeof(Node));
A[i]->data=0;
A[i]->next=NULL;
}
}
void InsertHash(Node **Q,int value)
{
int key;
Node *p,*q;
key=value%15;
if(Q[key]->next!=NULL)
{
p=Q[key]->next;
while(p->next!=NULL)
p=p->next;
q=(Node *)malloc(sizeof(Node));
q->data=value;
q->next=NULL;
p->next=q;
}
else
{
q=(Node *)malloc(sizeof(Node));
q->data=value;
q->next=NULL;
Q[key]->next=q;
}
}
int SearchHash(Node **Q,int value)
{
int key;
Node *p;
key=value%15;
if(Q[key]->next==NULL)
return 0;
else
{
p=Q[key]->next;
while(p!=NULL)
{
if(p->data==value)
return 1;
p=p->next;
}
return 0;
}
}     //拉链法哈希查找