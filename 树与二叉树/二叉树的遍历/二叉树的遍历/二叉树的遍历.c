#include<stdio.h>
#include<stdlib.h>
typedef char Elemtype;
typedef struct BiTreeNode{
	Elemtype data;
	struct BiTreeNode *lchild,*rchild;
}BiTreeNode,*BiTree;
BiTree CreatTree(){
	char data;
	BiTree T;
	printf("请输入数据：");
	scanf("%c",&data);
	getchar();
	if(data=='$')
		T=NULL;
	else{
		T=(BiTreeNode *)malloc(sizeof(BiTreeNode));
		T->data=data;
		T->lchild=CreatTree();
		T->rchild=CreatTree();
	}
	return T;
}
//先序遍历二叉树
void PreOrder(BiTree T){
	if(T==NULL)
		return;
	printf("%c",T->data);
	PreOrder(T->lchild);
	PreOrder(T->rchild);
}
//中序遍历
void MidOrder(BiTree T){
	if(T==NULL)
		return;
	MidOrder(T->lchild);
	printf("%c",T->data);
	MidOrder(T->rchild);
}
//后序遍历
void BeOrder(BiTree T){
	if(T==NULL)
		return;
	BeOrder(T->lchild);
	BeOrder(T->rchild);
	printf("%c",T->data);
}
int main(){
	BiTree T;
	T=CreatTree();
	PreOrder(T);
	printf("\n");
	MidOrder(T);
	printf("\n");
	BeOrder(T);
	printf("\n");
	system("pause");
	return 0;
}