#include <stdio.h>
#include <stdlib.h>

//����ջ��һ��ʮ��������ת����һ��������������д���Ӻ������ܲ����г���������ϻ����С�
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
	int x; //XΪ��ת����ʮ������
	scanf("%d",&x);
	Conversion(x);
	system("pause");
	return 0;
}

//��������  ���룺6   �����110