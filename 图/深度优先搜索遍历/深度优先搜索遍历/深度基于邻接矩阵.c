#include<stdio.h>
#include<stdlib.h>
#define MaxInt 10000
#define MaxSize 100

typedef char Vextype;
typedef int Arctype;
typedef struct  {
	Vextype vexs[MaxSize];
	Arctype arcs[MaxSize][MaxSize];
	int vexnum, arcnum;
	int arcinfo;
}AmGraph;

int LocateVex(AmGraph* G, char x) {
	int i;
	for (i = 0; i < G->vexnum; i++) {
		if (G->vexs[i] == x)
			return i;
	}
	return -1;
}

void AddArc(AmGraph* G, char vexi, char vexj, int v) {
	int posi, posj;
	posi = LocateVex(G, vexi);
	posj = LocateVex(G, vexj);
	G->arcs[posi][posj] = v;
	G->arcs[posj][posi] = v;
}

AmGraph* CreatGraph() {
	int i, j;
	AmGraph* G;
	G = (AmGraph*)malloc(sizeof(AmGraph));
	G->vexnum = 4;
	G->arcnum = 4;
	//printf("请输入顶点数，边数：");
	//scanf_s("%d,%d", &G->vexnum, &G->arcnum);
	printf("请输入所有顶点：\n");
	//getchar();
	for (i = 0; i < G->vexnum; i++) {
		printf("请输入第%d个顶点", i + 1);
		scanf("%c", &G->vexs[i]);
		getchar();
	}
	for (i = 0; i < G->vexnum; i++)
		for (j = 0; j < G->vexnum; j++)
			G->arcs[i][j] = 0;
	return G;
}

void DFS(AmGraph* G,Vextype v,int visit[]) {
	int j,vi;
	vi = LocateVex(G, v);
	if (visit[vi] == 0) {
		printf("%c", v);                 //输出顶点
		visit[vi] = 1;
		for (j = 0; j < G->vexnum; j++) {
			if (G->arcs[vi][j] != 0 && visit[j] == 0)
				DFS(G, G->vexs[j],visit);
		}

	}
	
}
int main() {
	AmGraph* G;
	int i;
	int *visit;
	G = CreatGraph();
	visit= (int*)malloc(sizeof(int) * G->vexnum);
	for (i = 0; i < G->vexnum; i++) {
		visit[i] = 0;
	}
	AddArc(G, 'a','b', 3);
	AddArc(G, 'a', 'c', 4);
	AddArc(G, 'b', 'c', 5);
	AddArc(G, 'a', 'd', 7);
	AddArc(G, 'b', 'd', 6);
	DFS(G, 'a',visit);
	system("pause");
	return 0;
}