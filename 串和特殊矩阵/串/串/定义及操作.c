#include<stdio.h>
#include<stdlib.h>
#define stringsize 265
typedef struct{
	char ch[stringsize];
	int length;
}String;
int InsertString(String *s,int pos,char c){
	s->ch[pos]=c;
	s->length=pos+1;
	return 1;
}
int Stringlen(String *s){
	return s->length;
}
void Displaystr(String *s){
	int i;
	printf("�������\n");
	for(i=0;i<s->length;i++)
		printf("%c",s->ch[i]);
}
int main(){
	String s;
	char c;
	int i=0;
	//s=(String *)malloc(sizeof(String));
	printf("�����һ���ַ���");
	scanf("%c",&c);
	while(c!='$'){
		InsertString(&s,i,c);
		printf("��������:");
		getchar();             /*�Ե��س�*/
		scanf("%c",&c);
		i++;
	}
	Displaystr(&s);
	printf("���ĳ���Ϊ��%d",Stringlen(&s));
	system("pause");
}