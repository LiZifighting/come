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
//////////	int i = 5; //������4���ֽ� ��̬����
//////////	int * p = (int *)malloc(sizeof(4));//ָ�����pΪ��̬����,malloc���ٵĿռ�Ϊ��̬����
//////////	*p = 5; //*p ����ľ���һ��int����,ָ�����p��ʾ��һ����int���͵ĵ�ַΪ���ݵı���
//////////	free(p); //freep(p)��ʾ��p��ָ����ڴ���ͷŵ�,p������ڴ��Ǿ�̬�ģ������ɳ���Ա�ֶ��ͷ�
//////////		//p������ڴ�ֻ����p�������ڵĺ���������ֹʱ��ϵͳ�Զ��ͷ� 
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
//////	printf("������%d������",N);
//////	for(p=a;p<a+N;p++)
//////		scanf("%d",p);
//////	printf("������飨��ǰ����\n");
//////	for(p=a;p<a+N;p++)
//////		printf("%5d",*p);
//////	printf("\n������飨�Ӻ���ǰ��\n");
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
//////int puts(const char * string)��
//////{��
//////    const char *t = string;
//////    const char *v = string;��
//////    int i = 0;��
//////    while(*t!='\0')��
//////    {��
//////        i++;��
//////        t++;��
//////    }��
//////    int j = 0;��
//////    for(j;j<=i;j++)��
//////        putchar((v[j]));��
//////    putchar('\n');
//////    return 0;��
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
//////printf("ƽ���ɼ�Ϊ%f\n",(float)(sum/2));
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
////	printf("��Ϊ��˳���ֵ��\n����Ԫ�ظ�����")
////	scanf("%d",&L->length);
////	printf("����Ԫ�ظ�����������Ԫ��ֵ����Ԫ���Կո��������")��
////	for(i=0;i<L->length;i++)
////		scanf("%d",&L->elem[i]);
////}
////void OutputSqList(SqList * L){
////	int i;
////	printf("˳���ĳ���Ϊ%d\n",L->length);
////	printf("˳���Ԫ������Ϊ��");
////	for(i=0;i<L->length;i++){
////		printf("%4d"��L->elem[i]);
////	}
////	printf("\n");
////}
////int main(){
////	SqList *L;
////	L=CreatList();
////	if(L==NULL)
////		printf("��ʼ��˳���ʧ��");
////	else{
////		printf("��ʼ��˳���ɹ�");
////		AssignSqList(L);
////		OutputSqList(L);
////	}
////	return 0;



