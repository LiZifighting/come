#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 256
typedef struct{
	char ch[MAXSIZE];
	int len;
}String;
int PatternString(String *s,String *t){
	int i,j;
	i=j=0;
	while(i<s->len&&j<t->len){
		if(s->ch[i]==t->ch[j]){
			i++;
			j++;
		}
		else{
			i=i-j+1;
			j=0;
		}

	}
	if(j>=t->len){
			return i-t->len+1;
		}
		else
			return -1;
}
int main(){
	String *s,*t;
	int x=-1;
	s=(String *)malloc(sizeof(String));
	t=(String *)malloc(sizeof(String));
	printf("������������");
	gets(s->ch);
	printf("�������Ӵ���");
	gets(t->ch);
	s->len=strlen(s->ch);
	t->len=strlen(t->ch);
	x=PatternString(s,t);
	if(x>=0)
		printf("ƥ��ɹ�!�Ӵ���λ����%d",x);
	else
		printf("δ�ҵ��Ӵ�");
	system("pause");
	return 0;
}