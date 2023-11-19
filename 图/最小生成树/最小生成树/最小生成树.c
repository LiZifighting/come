#include<stdio.h>
#include<stdlib.h>
#define MaxInt 10000
#define MaxSize 100

typedef char VexType ;
typedef struct AmGraph{
	VexType vexs[MaxSize];
	int arcs[MaxSize][MaxSize];
	int vexnum,arcnum;
}AmGraph;
typedef struct{
	int vex;
	int arcv;
}MinEdge;

int Locate(AmGraph *G,VexType v){
	int i;
	for(i=0;i<G->vexnum;i++){
		if(G->vexs[i]==v)
			return i;
	}
	return -1;
}

AmGraph *CreatAmGraph(){
	AmGraph *G;
	char vi,vj;
	int i,j,k,posi,posj,v;
	G=(AmGraph *)malloc(sizeof(AmGraph));
	printf("请输入顶点数,边数：");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	printf("请输入所有顶点：\n");
	getchar();
	for(i=0;i<G->vexnum;i++){
		scanf("%c",&G->vexs[i]);
	}
	for(i=0;i<G->vexnum;i++){
		for(j=0;j<G->vexnum;j++){
			G->arcs[i][j]=MaxInt;
		}
	}
	for(k=0;k<G->arcnum;k++){
		printf("请输入第%d条边的信息：",k+1);
		getchar();
		scanf("%c,%c,%d",&vi,&vj,&v);
		posi=Locate(G,vi);
		posj=Locate(G,vj);
		G->arcs[posi][posj]=v; 
		G->arcs[posj][posi]=v;
	}
}

AmGraph * PrimSpanTree(AmGraph *G,VexType v){
	AmGraph *r;
	int i,j,vi,vexmin,arcmin;
	r=(AmGraph *)malloc(sizeof(AmGraph));
	MinEdge *MinE=(MinEdge *)malloc(sizeof(MinEdge)*G->vexnum);
	//初始化最小生成树
	r->arcnum=G->arcnum;
	r->vexnum=G->vexnum;
	for(i=0;i<G->vexnum;i++){
		r->vexs[i]=G->vexs[i];
	}
	for(i=0;i<r->vexnum;i++){
		for(j=0;j<r->vexnum;j++){
			r->arcs[i][j]=MaxInt;
		}
	}
	vi=Locate(G,v);
	for(i=0;i<G->vexnum;i++){
		MinE[i].vex=vi;
		MinE[i].arcv=MaxInt;
	}
	MinE[vi].arcv=0;
	for(j=0;j<G->vexnum;j++){
		MinE[j].arcv=r->arcs[vi][j];
	}
}
int main(){
	AmGraph *G;
	G=CreatAmGraph();
	system("pause");
	return 0;
}