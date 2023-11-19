//#include<stdio.h>
//int fib(int n)
//{
//	if(n>2)
//		return fib(n-1)+fib(n-2);
//	else 
//		return n;
//}
//int main()
//{
//	int n=0;
//	int sum=0;
//	printf("请输入台阶数：");
//	scanf("%d",&n);
//	sum = fib(n);
//	printf("有%d种方式",sum);
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#define N 100
//int main(){
//	int i,n,arr[N];
//	int max=0,min=100;
//	printf("输入成绩个数：");
//	scanf("%d",&n);
//	/*for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//	max = arr[0];
//	for(i=0;i<n;i++){
//		if(arr[i]>max){
//			max = arr[i];
//		}
//	}
//	min = arr[0];
//	for(i=0;i<n;i++){
//		if(min>arr[i]){
//			min=arr[i];	
//		}
//	}*/
//	for(i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//		if(max<arr[i])
//			max = arr[i];
//		if(min>arr[i])
//			min = arr[i];
//	}
//	printf("差值为：%d",max-min);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<ctype.h>
int main(){
	char s;
	printf("输入字母：");
	scanf("%c",&s);
	if(islower(s))
		printf("%c",toupper(s));
	if(isupper(s))
		printf("%c",tolower(s));
	/*if('a'<s && s<'z')
	{
		printf("小写字母\n");
		printf("%c",s-32);
	}
	if('A'<s && s<'Z')
	{
		printf("大写字母\n");
		printf("%c",s+32);
	}*/
	system("pause");
	return 0;
}