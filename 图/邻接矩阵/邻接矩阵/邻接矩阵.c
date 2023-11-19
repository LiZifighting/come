#include<stdio.h>
#include<stdlib.h>
#define MaxInt 10000
#define MvNum 100
typedef char VertexType;
typedef int ArcType;
typedef struct{
	VertexType vex[MvNum];
	ArcType arc[MvNum][MvNum];
	int vexnum,arcnum;
}AMGRAPH;

int Locate(AMGRAPH *G,char v){
	int i;
	for(i=0;i<G->vexnum;i++)
		if(G->vex[i]==v)
			return i;
	return -1;
}

//������
void CreatMGraph(AMGRAPH *G){
	int i,j,k,val;
	int posi,posj;
	char vi,vj;
	printf("�����붥�����ͱ�����");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	printf("�����붥����Ϣ�����������룩��\n");
	getchar();
	for(i=0;i<G->vexnum;i++)           //������Ϣ
		scanf("%c",&G->vex[i]);
	for(i=0;i<G->vexnum;i++)
		for(j=0;j<G->vexnum;j++)                    //��ʼ����
			G->arc[i][j]=MaxInt;
	for(k=0;k<G->arcnum;k++){
		printf("�����%d���ߵ���Ϣ����㣬�յ㣬Ȩֵ����\n",k+1);
		getchar();
		scanf("%c,%c,%d",&vi,&vj,&val);
		posi=Locate(G,vi);
		posj=Locate(G,vj);
		G->arc[posi][posj]=val;
	}

}

void DisplayGraph(AMGRAPH *G){                //���
	int i,j;
	printf("����������%d������",G->vexnum);
	for(i=0;i<G->vexnum;i++){
		printf("%c ",G->vex[i]);
	}
	printf("\n");
	printf("����%d���ߵ���Ϣ",G->arcnum);
	for(i=0;i<G->vexnum;i++){
		for(j=0;j<G->vexnum;j++){
			printf("%c,%c,%d\n",G->vex[i],G->vex[j],G->arc[i][j]);
		}
	}

}
int main(){
	AMGRAPH G;
	CreatMGraph(&G);
	DisplayGraph(&G);
	system("pause");
	return 0;
}