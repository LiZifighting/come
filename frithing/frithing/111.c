//////////
////////////#include<stdio.h>
////////////int main()
////////////{int j,i;
////////////int a[2][3]={{2,5,4},{2,5,6}};
////////////	
////////////for(j=0;j<2;j++)
////////////	
////////////for(i=0;i<3;i++)
////////////	
////////////	printf("%d",a[j][i]);
////////////    system("pause");
////////////}
////////////#include<stdio.h>
////////////#include<math.h>
////////////
////////////double fun(float a,float b)
////////////	{
////////////    double c;
////////////	 c=pow(a,b);
////////////	 return c;
////////////	}
////////////int main()
////////////{
////////////float a,b;
////////////double x;
////////////
////////////scanf("%f%f",&a,&b);
////////////x=fun(a,b);
////////////printf("%f",x);
////////////system("pause");
////////////}
//////////
////////////#include<stdio.h>
////////////#define PI 3.14
////////////  double fun(int a)
////////////   {
////////////	double area;
////////////	area=PI*a*a;
////////////	return area;
////////////   }
////////////int main()
////////////{
////////////	int r;
////////////	double s,c;
////////////	scanf("%d",&r);
////////////	s=fun(r);
////////////	c=2*PI*r;
////////////	printf("%f\n%f",s,c);
////////////	system("pause");
////////////}	
//////////// 
//////////# include <stdio.h>
//////////# include <malloc.h>  
//////////int main(void)
//////////{
//////////	int i = 5; //分配了4个字节 静态分配
//////////	int * p = (int *)malloc(sizeof(4));//指针变量p为静态分配,malloc开辟的空间为动态分配
//////////	*p = 5; //*p 代表的就是一个int变量,指针变量p表示是一个以int类型的地址为内容的变量
//////////	free(p); //freep(p)表示把p所指向的内存给释放掉,p本身的内存是静态的，不能由程序员手动释放
//////////		//p本身的内存只能在p变量所在的函数运行终止时由系统自动释放 
//////////	return 0;
//////////}
////////#include<stdio.h>
////////void change( int *p)
////////{    printf("*p=%d\n",*p);
////////     *p=0;
////////	 printf("*p=%d\n",*p);
////////}
////////int main()
////////{
////////	int x=10;
////////	printf("x=%d\n",x);
////////	change(&x);
////////	printf("x=%d\n",x);
////////	system("pause");
//////////}
////////#include<stdio.h>
////////int main()
////////{
////////	char *p,a;
////////	int *q,b;
////////	p=&a;
////////	q=&b;
////////	printf("&a=%p,&a=%p,%a=%p\n",&a,p,&p);
////////	printf("&b=%p,&b=%p,&b=%p\n",&b,q,&q);
////////	printf("sizeof(p)=%d\n",sizeof(p));
////////	printf("sizeof(q)=%d\n",sizeof(q));
////////system("pause");
////////}
//////
////////
////////#include<stdio.h>
////////#define N 100
////////void count(float a[],int n,int *good, int *pass,int *fail);
////////int input(float a[]);
////////
////////int main()
////////{
////////}
//////#include<stdio.h>
//////#define N 10
//////int main()
//////{
//////	int a[N],*p;
//////	printf("请输入%d个整数",N);
//////	for(p=a;p<a+N;p++)
//////		scanf("%d",p);
//////	printf("输出数组（从前往后）\n");
//////	for(p=a;p<a+N;p++)
//////		printf("%5d",*p);
//////	printf("\n输出数组（从后往前）\n");
//////	for(p=a+N-1;p>=a;p--)
//////		printf("%5d",*p);
//////	system("pause");
//////}
//////#include<stdio.h>
//////#define N 5
//////int main()
//////{
//////	int a[N],*p,i,c;
//////	p=a;
//////	for(i=0;i<N;i++)
//////		*p++=i;
//////	p=a;
//////	while(p<a+N)
//////		printf("%5d",*p++);
//////	/*for(c=0;c<N;c++)
//////		printf("%5d",a[c]);*/
//////	system("pause");
//////}
//////#include<stdio.h>
//////#define N 4
//////void input(int *p,int n);
//////void print(int *p,int n);
//////void reserve(int *p,int n);
//////int main()
//////{
//////	int a[N];
//////	input(a,N);
//////	print(a,N);
//////	reserve(a,N);
//////	print(a,N);
//////	system("pause");
//////}
//////void input(int *p,int n)
//////{
//////	int i;
//////	for(i=0;i<n;i++)
//////		scanf("%d",p++);
//////}
//////void print(int *p,int n)
//////{
//////	int i;
//////	for(i=0;i<n;i++)
//////		printf("%4d",*p++);
//////
//////}
////////void reserve(int *p,int n)
////////{
////////	int temp,*q;
////////	q=p+n-1;
////////	while(p<q){
////////	temp=*p;
////////	(*p)=(*q);
////////	*q=temp;
////////	p++;
////////	q--;
////////	}
////////}
//////void reserve(int *p,int n)
//////{
//////	int temp[N],i=0;
//////	p=p+n-1;
//////
//////	while(p>=0&&i<n){
//////		/*while(i<n){
//////			temp[i]=*p;
//////			break;
//////		}*/temp[i]=*p;
//////		p--;
//////		i++;
//////	}
//////}
//////#include<stdio.h>
//////#include<string.h>
//////int main()
//////{
//////	char *str1="my name is liziyi";
//////	char *str2="hello";
//////	char *temp;
//////	printf("strlen(str1)=%d\n",strlen(str1));
//////	printf("str1:%s\n",str1);
//////	printf("str2:%s\n",str2);
//////	temp=str1;
//////	str1=str2;
//////	str2=temp;
//////	printf("str1:%s\n",str1);
//////	printf("str2:%s\n",str2);
//////	system("pause");
//////
////////}
//////#include<stdio.h>
//////#include<string.h>
//////int main()
//////{
//////	char s[20]="Do you understand?";
//////	char *p;
//////	p=s;
//////	while(*p!='\0')
//////		putchar(*p++);
//////	printf("strlen(s)=%d\n",p-s);
//////	system("pause");
//////
//////}
//////#include<stdio.h>
//////#include<string.h>
//////#define N 80
//////char* mystract(char *t,char *s)
//////{
//////	char *p=t;
//////	while(*p!='\0')
//////		p++;
//////	while(*s!='\0')
//////		*p++=*s++;
//////	*p='\n';
//////	return t;
//////}
//////int main()
//////{
//////	char str1[N]="computer";
//////	char str2[N]="science";
//////	puts(str1+2);
//////	puts(str2);
//////	 
//////
//////	system("pause");
//////}
//////#include<stdio.h>
//////#include<string.h>
//////int puts(const char * string)　
//////{　
//////    const char *t = string;
//////    const char *v = string;　
//////    int i = 0;　
//////    while(*t!='\0')　
//////    {　
//////        i++;　
//////        t++;　
//////    }　
//////    int j = 0;　
//////    for(j;j<=i;j++)　
//////        putchar((v[j]));　
//////    putchar('\n');
//////    return 0;　
//////}
//////3
//////typedef struct stu{
//////	int num;
//////	char name[20];
//////	float score;
//////}SUT;
//////int main()
//////{
//////	SUT edu[2]={
//////		{101,"lizi",99},
//////		{102,"hwli",100}
//////	};
//////	float sum=0;
//////	int i;
//////	for (i=0;i<2;i++){
//////	sum=sum+edu[i].score;}
//////printf("平均成绩为%f\n",(float)(sum/2));
//////system("pause");
//////}
////#include<stdio.h>
////#include<stdlib.h>
////#include<malloc.h>
////#define MAXSIZE 100
////typedef ElemType
////typedef struct{
////	ElemType elem[MAXSIZE];
////	int length;
////}SqList;
////SqList  * CreatList(){
////	SqList * L;
////
////	L=(SqList *)malloc(sizeof(SqList));
////	if(!L)
////		return NULL;
////	else{
////		L->length=0;
////		return L;
////	}	
////}
////void AssignSqList(SqList *L){
////	int i;
////	printf("请为空顺序表赋值：\n输入元素个数：")
////	scanf("%d",&L->length);
////	printf("按照元素个数依次输入元素值（各元素以空格隔开）：")；
////	for(i=0;i<L->length;i++)
////		scanf("%d",&L->elem[i]);
////}
////void OutputSqList(SqList * L){
////	int i;
////	printf("顺序表的长度为%d\n",L->length);
////	printf("顺序表元素依次为：");
////	for(i=0;i<L->length;i++){
////		printf("%4d"，L->elem[i]);
////	}
////	printf("\n");
////}
////int main(){
////	SqList *L;
////	L=CreatList();
////	if(L==NULL)
////		printf("初始化顺序表失败");
////	else{
////		printf("初始化顺序表成功");
////		AssignSqList(L);
////		OutputSqList(L);
////	}
////	return 0;



