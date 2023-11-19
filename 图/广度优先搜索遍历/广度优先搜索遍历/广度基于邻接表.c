#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10

typedef int vextype;
typedef struct VexNode{
	vextype data;
	struct ArcNode *firstarc;
}VexNode;
typedef struct ArcNode{
	int lposvex;
	int arcinfo;
	struct ArcNode *next;
}ArcNode;
typedef struct AlGraph{
	VexNode *vexs;
	int vexnum;
	int arcnum;
}AlGraph;
typedef struct{                      //循环队列
	int data[Maxsize]; 
	int front,rear;
}SqQueue;

SqQueue * CreatQueue(){
	SqQueue *Q;
	Q=(SqQueue *)malloc(sizeof(SqQueue));
	if(!Q)
		return NULL;
	else
		Q->front=Q->rear=0;
		return Q;
}

int IsEmpty(SqQueue *Q){
	if(Q->rear==Q->front){
		//printf("队满，无法入队");
		return 1;
	}
	return 0;
}

int EnQueue(SqQueue *Q,int pos){
	if((Q->rear+1)%Maxsize==Q->front){
		return 0;
	}
	else{
		Q->data[Q->rear]=pos;
		Q->rear=(Q->rear+1)%Maxsize;
		//printf("入队成功\n");
		return 1;
	}
}

int DeQueue(SqQueue *Q,int *x){
	if(IsEmpty(Q)){
		return 0;
	}
	else{
		*x=Q->data[Q->front];
		Q->front=(Q->front+1)%Maxsize;
		//printf("出队成功");
		return 1;
	}
}

AlGraph * CreatAlGraph(){
	int i,j,k;
	AlGraph *G;
	G=(AlGraph *)malloc(sizeof(AlGraph));
	/*printf("请输入顶点数,边数：");
	scanf("%d,%d",&G->vexnum,&G->arcnum);*/
	G->vexnum=6;
	G->arcnum=6;
	G->vexs=(VexNode *)malloc(sizeof(VexNode)*G->vexnum);
	for(i=0;i<G->vexnum;i++){              //初始化vexs数组
		scanf("%d",&G->vexs[i].data);
		//G->vexs[i].data=1;
		G->vexs[i].firstarc=NULL;
	}
}

int Locate(AlGraph *G,vextype v){
	int i;
	for(i=0;i<G->vexnum;i++){
		if(G->vexs[i].data==v)
			return i;
	}
	return -1;
}

void AddArc(AlGraph *G,vextype vi,vextype vj,int v){
	int posi,posj;
	ArcNode *t;
	t=(ArcNode *)malloc(sizeof(ArcNode));
	posi=Locate(G,vi);
	posj=Locate(G,vj);
	t->lposvex=posj;
	t->arcinfo=v;
	t->next=G->vexs[posi].firstarc;
	G->vexs[posi].firstarc=t;
	//printf("K");
}

void BFS(AlGraph *G,vextype v,int visit[]){
	int posv;
	ArcNode *t;
	SqQueue *Q;
	Q=CreatQueue();
	posv=Locate(G,v);
	EnQueue(Q,posv);
	visit[posv]=1;
	while(!IsEmpty(Q)){
		DeQueue(Q,&posv);
		printf("%d",G->vexs[posv]);
		for(t=G->vexs[posv].firstarc;t!=NULL;t=t->next){
			if(visit[t->lposvex]==0){
				EnQueue(Q,t->lposvex);
				visit[t->lposvex]=1;
			}
		}
	}
}

int main(){
	AlGraph *G;
	int *visit,i;
	G=CreatAlGraph();
	visit= (int*)malloc(sizeof(int) * G->vexnum);
	for (i = 0; i < G->vexnum; i++) {
		visit[i] = 0;
	}
	AddArc(G,1,2,3);
	AddArc(G,1,3,5);
	AddArc(G,2,4,6);
	AddArc(G,3,4,6);
	AddArc(G,4,5,8);
	AddArc(G,2,6,9);
	BFS(G,1,visit);
	system("pause");
	return 0;
}
