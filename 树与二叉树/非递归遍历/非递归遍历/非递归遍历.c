#include<stdio.h>
#include<stdlib.h>
#define NULL 0
typedef char Elemtype;
typedef struct BiTreeNode{
	Elemtype data;
	struct BiTreeNode *lchild,*rchild;
	int height,count;
}BiTreeNode,*BiTree;
BiTree CreatTree(){
	char data;
	BiTree T;
	scanf("%c",&data);
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