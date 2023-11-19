#include<stdio.h>
#include<stdlib.h>
#define MaxInt 10000
#define MaxSize 100
typedef char Vertype;
typedef float ArcType;
typedef struct VerNode{
	Vertype vexinfo;      //元素值
	struct ArcNode *firstarc;   //指向第一条边的终点
}VerNode;  //顶点结点

typedef struct ArcNode{
	int vexj;    //终点元素位置
	ArcType arcinfo;     //边的权值 
	struct ArcNode *next;
}ArcNode;  //边结点

typedef struct{
	VerNode *vex;      //顶点数组
	int vexnum,arcnum;  //顶点数，边数
}AlGraph;   //图

//有向网
int LoctVex(AlGraph *G,char x){        //寻找位置
	int i;
	for(i=0;i<G->vexnum;i++){
		if(x==G->vex[i].vexinfo)
			return i;
	}
	return -1;
}
//创建邻接表
AlGraph *CreatGraph(){           
	int i,j,v,posi,posj;        
	char vi,vj;
	ArcNode *t=NULL;             
	AlGraph *G;
	G = (AlGraph *)malloc(sizeof(AlGraph));
	printf("请输入顶点数和边数(顶点数,边数):");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	printf("请输入所有顶点（以空格分隔）：\n");
	getchar();
	G->vex = (VerNode *)malloc((G->vexnum) * sizeof(VerNode));
	for(i = 0;i < G->vexnum;i++){
		scanf("%c",&G->vex[i].vexinfo);
		getchar();
		G->vex[i].firstarc=NULL;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	}
	printf("请输入各边的信息：\n");
	for(j=0;j<G->arcnum;j++){
		printf("请输入第%d边的信息（起点,终点,权值）：",j+1);
		scanf("%c,%c,%d",&vi,&vj,&v);
		getchar();
		posi=LoctVex(G,vi);
		posj=LoctVex(G,vj);
		t=(ArcNode *)malloc(sizeof(ArcNode));
		t->vexj=posj;
		t->arcinfo=v;
		t->next=G->vex[posi].firstarc;
		G->vex[posi].firstarc=t;
	}
	return G;
}

//输出
void Display(AlGraph *G){
	ArcNode *t;
	int i;
	for(i=0;i<G->vexnum;i++){
		t=G->vex[i].firstarc; 
		while(t){
			printf("%c,%c,%f\n",G->vex[i].vexinfo,G->vex[t->vexj].vexinfo,t->arcinfo);
			t=t->next;
		}
	}
}

int main(){                                    
	AlGraph *G;
	G=CreatGraph();
	Display(G);
	system("pause");
	return 0;
}