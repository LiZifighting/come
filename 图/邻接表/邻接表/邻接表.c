#include<stdio.h>
#include<stdlib.h>
#define MaxInt 10000
#define MaxSize 100
typedef char Vertype;
typedef float ArcType;
typedef struct VerNode{
	Vertype vexinfo;      //Ԫ��ֵ
	struct ArcNode *firstarc;   //ָ���һ���ߵ��յ�
}VerNode;  //������

typedef struct ArcNode{
	int vexj;    //�յ�Ԫ��λ��
	ArcType arcinfo;     //�ߵ�Ȩֵ 
	struct ArcNode *next;
}ArcNode;  //�߽��

typedef struct{
	VerNode *vex;      //��������
	int vexnum,arcnum;  //������������
}AlGraph;   //ͼ

//������
int LoctVex(AlGraph *G,char x){        //Ѱ��λ��
	int i;
	for(i=0;i<G->vexnum;i++){
		if(x==G->vex[i].vexinfo)
			return i;
	}
	return -1;
}
//�����ڽӱ�
AlGraph *CreatGraph(){           
	int i,j,v,posi,posj;        
	char vi,vj;
	ArcNode *t=NULL;             
	AlGraph *G;
	G = (AlGraph *)malloc(sizeof(AlGraph));
	printf("�����붥�����ͱ���(������,����):");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	printf("���������ж��㣨�Կո�ָ�����\n");
	getchar();
	G->vex = (VerNode *)malloc((G->vexnum) * sizeof(VerNode));
	for(i = 0;i < G->vexnum;i++){
		scanf("%c",&G->vex[i].vexinfo);
		getchar();
		G->vex[i].firstarc=NULL;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
	}
	printf("��������ߵ���Ϣ��\n");
	for(j=0;j<G->arcnum;j++){
		printf("�������%d�ߵ���Ϣ�����,�յ�,Ȩֵ����",j+1);
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

//���
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