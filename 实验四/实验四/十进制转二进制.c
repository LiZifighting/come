#include <stdio.h>
#include <stdlib.h>

//利用栈将一个十进制数字转换成一个二进制数。请写出子函数功能并进行程序填空再上机运行。
#define Stack_size 100
typedef struct{
	int elem[Stack_size];
	int top;
}SeqStack;
void InitStack(SeqStack *s){
	s->top=-1;
}
int Push(SeqStack *s,int x){
	if(s->top==Stack_size-1) 
		return(0);
	s->top++;
	s->elem[s->top]=x;
	return(1);
}
int Pop(SeqStack *s,int *x){
	if(s->top==-1)
		return 0;
	else{
		*x=s->elem[s->top];
		s->top--;
	}
	return(1);
}
int IsEmpty(SeqStack s){
	if(s.top==-1)
		return 1;
	else
		return  0;
}
void Conversion(int N){
	int i;
	int a[20];
	for(i=0;N;i++){
		a[i]=N%2;
		N=N/2;
	}
	for(;i;i--)
		printf("%d",a[i-1]);
}
int main(){
	int x; //X为待转换的十进制数
	scanf("%d",&x);
	Conversion(x);
	system("pause");
	return 0;
}

//测试用例  输入：6   输出：110