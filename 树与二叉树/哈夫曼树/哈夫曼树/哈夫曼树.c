#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
typedef struct HfmTreeNode{
	Elemtype data;
	int lchild ,rchild,parent;
}HfmTreeNode;
void Select(HfmTreeNode *T,int x,int *s1,int *s2){
	int i,j,max1,max2;
	max1=T[1].data;
	max2=T[1].data;
	for(i=1;i<=x;i++){
		if(T[i].data>max1){
			max1=T[i].data;
			max2=max1;
		}
	}
	*s1=max1;
	*s2=max2;
}
 void CreatHfmTree(HfmTreeNode *T,int n){
	int m,i;
	int s1,s2;
	if(n <= 1)
		return ;
	m = 2 * n - 1;
	T = (HfmTreeNode *)malloc((m+1)*sizeof(HfmTreeNode));
	for(i=1;i<=m;i++){
		T[i].lchild=0;
		T[i].rchild=0;
		T[i].parent=0;
	}
	printf("输入元素：");
	for(i=1;i<=n;i++)
		scanf("%d",&T[i].data);
	for(i=n+1;i<=m;i++){
		Select(T,i-1,&s1,&s2);
		T[s1].parent=i;
		T[s2].parent=i;
		T[s1].lchild=s1;
		T[s2].rchild=s2;
		T[i].data=T[s1].data+T[s2].data;
	}
	printf("构造成功！");

}
void main(){
	HfmTreeNode *T;
	int n;
	T=(HfmTreeNode *)malloc(sizeof(HfmTreeNode));
	printf("输入元素个数：");
	scanf("%d",&n);
	CreatHfmTree(T,n);
	system("pause");
}