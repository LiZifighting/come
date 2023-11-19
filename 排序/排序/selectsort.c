#include<stdio.h>
#define N 5
void input(int a[],int n)
{
	int i;
	printf("输入元素：");
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	printf("输入成功\n");
}
void print(int a[],int n)
{
	int i;
	printf("输出元素：");
	for(i=0;i<n;i++){
		printf("%2d",a[i]);
	}
	printf("\n");
	printf("排序完毕\n");
}
void selectSort(int a[],int n)
{
	int mindex,i,j,temp;
	for(i=0;i<n;i++){
		mindex=i;
		for(j=i+1;j<n;j++){
			if(a[mindex]>a[j]){
				mindex=j;
			}
			if(mindex!=i){
				temp=a[i];
				a[i]=a[mindex];
				a[mindex]=temp;
			}
		}
	}
}
void bubbleSort(int a[],int n)
{
	int i,temp,flag;
	flag=1;
	while(n>1&&flag){
		flag=0;
		for(i=1;i<n;i++){
			if(a[i]>a[i-1]){
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
				flag=1;
			}
		}
		n--;
	}
}
int main()
{
	int a[N];
	input(a,N);
	selectSort(a,N);
	print(a,N);
	bubbleSort(a,N);
	print(a,N);
	system("pause");
	return 0;
}