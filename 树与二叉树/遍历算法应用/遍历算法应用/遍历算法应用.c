#include<stdio.h>
#include<stdlib.h>
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
//复制二叉树
int CopyTree(BiTree T,BiTree S){
	if(T==NULL)
		return 0;
	S=(BiTreeNode *)malloc(sizeof(BiTree));
	S->data=T->data;
	CopyTree(T->lchild,S->lchild);
	CopyTree(T->rchild,S->rchild);
	return 1;
}
//计算结点个数
int PreOrderCount(BiTree T){
	static int count=0;
	if(T==NULL)
		return ;
	else{
		count++;
		PreOrderCount(T->lchild);
		PreOrderCount(T->rchild);
		return count;
	}
}
//计算树的高度
int NodeHeight(BiTree T){
	int lheight,rheight;
	if(T==NULL)
		return 0;
	lheight=NodeHeight(T->lchild);
	rheight=NodeHeight(T->rchild);
	T->height=(lheight>rheight)?lheight+1:rheight+1;
	return T->height;
}
//计算叶子结点的个数
int TreeLeofsize(BiTree T){
	if(T==NULL)
		return 0;
	if(T->lchild==NULL && T->rchild==NULL)
		return 1;
	return TreeLeofsize(T->lchild)+TreeLeofsize(T->rchild);
}
void main(){
	BiTree T,S;
	int height;
	S=(BiTreeNode *)malloc(sizeof(BiTree));
	T=CreatTree();
	printf("总结点数为：%d\n",PreOrderCount(T));
	if(CopyTree(T,S))
		printf("复制成功\n");
	height=NodeHeight(T);
	printf("高度为：%d\n",height);
	printf("叶子结点个数为：%d\n",TreeLeofsize(T));
	system("pause");
	return;
}