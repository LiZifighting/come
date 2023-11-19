//
#include<stdio.h>
void fun(int a[],int c,int b)
	{
		int i,temp1,temp;
	    if (a[0]>a[1]){
		  temp=a[0];
	      a[0]=a[1];
		  a[1]=temp;}

		temp1=c;
		c=b;
		b=temp1;

	}
void fun1(int a[])
{
	int i;
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
}
void fun2(int a[])
{
	int i;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
}

int main()
{int c=1,b=2;
	int a[5];
	fun2(a);
	fun(a,c,b);
	fun1(a);
	printf("\n%d%d",c,b);
	
	system("pause");
}
	

