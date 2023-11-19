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
	printf("请输入主串：");
	gets(s->ch);
	printf("请输入子串：");
	gets(t->ch);
	s->len=strlen(s->ch);
	t->len=strlen(t->ch);
	x=PatternString(s,t);
	if(x>=0)
		printf("匹配成功!子串的位置在%d",x);
	else
		printf("未找到子串");
	system("pause");
	return 0;
}