//{------建立单链表-----}
#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node * next;
}LinkNode,*LinkList;
LinkList CreatFormHead(){
	char flag='Y';
	LinkList L;			/*定义头指针*/
	LinkNode *s;
	L=(LinkList)malloc(sizeof(LinkNode));		/*申请头节点*/
	L->next=NULL;			/*头结点指针域置为空*/
	while(flag == 'Y'){
		s=(LinkNode *)malloc(sizeof(LinkNode));
		printf("输入元素：");
		scanf("%d",&s->data);
		s->next=L->next;
		L->next=s;
		getchar();
		printf("是否继续（Y & N）:");
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
		printf("创建单链表失败");
	else{
		printf("创建单链表成功\n");
		printf("创建的单链表是:");
		Output(L);
	}
	printf("\n");
	system("pause");
	return 0;
}