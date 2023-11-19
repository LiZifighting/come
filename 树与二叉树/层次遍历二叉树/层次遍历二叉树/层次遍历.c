#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
#define NULL 0
typedef char Elemtype;
typedef struct BiTreeNode{
	Elemtype data;
	struct BiTreeNode *lchild,*rchild;
}BiTreeNode,*BiTree;
typedef struct TreeQueuq{
	BiTreeNode elem[MaxSize];
	int front,rear;
}TreeQueue;
BiTree CreatTree(){
	char data;
	BiTree T;
	//printf("请输入数据：");
	scanf("%c",&data);
	//getchar();
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
TreeQueue *CreatQueue(){
	TreeQueue *TQ;
	TQ=(TreeQueue *)malloc(sizeof(TreeQueue));
	return TQ;
}
TreeQueue *InitQueue(TreeQueue *Q){
	Q->front=Q->rear=NULL;
	return Q;
}
TreeQueue *EnQueue(TreeQueue *Q,BiTreeNode *x){
	if((Q->rear+1)%MaxSize==Q->front){
		printf("队满无法入队\n");
		return NULL;
	}
	else{
		Q->elem[Q->rear]=*x;
		Q->rear=(Q->rear+1)%MaxSize;
		//printf("入队成功，入队的元素是：%c\n",x->data);
		return Q;
	}
}
int DeQueue(TreeQueue *Q,BiTreeNode *x){
	if(Q->front==Q->rear){
		printf("队空无法出队\n");
		return 0;
	}
	else{
		*x=Q->elem[Q->front];
		Q->front=(Q->front+1)%MaxSize;
		//printf("出队成功，出队的元素是：%c\n",x->data);
		return 1;
	}
}
int QueueEmpty(TreeQueue *Q){
	if(Q->front==Q->rear)
		return 0;
	else
		return 1;
}
void LevelOrder(BiTree T){
	TreeQueue *TQ;
	BiTreeNode *q;
	TQ=CreatQueue();
	InitQueue(TQ);
	if(T==NULL)
		return;
	else{
		EnQueue(TQ,T);
		while(QueueEmpty(TQ)!=NULL){
			q=&TQ->elem[TQ->front];
			DeQueue(TQ,q);
			printf("%c",q->data);
			if(q->lchild!=NULL)
				EnQueue(TQ,q->lchild);
			if(q->rchild!=NULL)
				EnQueue(TQ,q->rchild);
		}
	}
}
void main(){
	BiTree T;
	T=CreatTree();
	LevelOrder(T);
	system("pause");
	return;
}