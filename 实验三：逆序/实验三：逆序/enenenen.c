//{------����������-----}
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node * next;
}LinkNode,*LinkList;
LinkList CreatFormHead(){
	char flag='Y';
	LinkList L;			/*����ͷָ��*/
	LinkNode *s;
	L=(LinkList)malloc(sizeof(LinkNode));		/*����ͷ�ڵ�*/
	L->next=NULL;			/*ͷ���ָ������Ϊ��*/
	while(flag == 'Y'){
		s=(LinkNode *)malloc(sizeof(LinkNode));
		printf("����Ԫ�أ�");
		scanf("%d",&s->data);
		s->next=L->next;
		L->next=s;
		getchar();
		printf("�Ƿ������Y & N��:");
		scanf("%c",&flag);
	}
	return L;
}
void Output(LinkList head){
	LinkNode *p;
	p=head->next;
	while(p!=NULL){
		printf("%-2d",p->data);
		p=p->next;
	}
}
int main(){
	LinkList L;
	L=CreatFormHead();
	if(L==NULL)
		printf("����������ʧ��");
	else{
		printf("����������ɹ�\n");
		printf("�����ĵ�������:");
		Output(L);
	}
	printf("\n");
	system("pause");
	return 0;
}