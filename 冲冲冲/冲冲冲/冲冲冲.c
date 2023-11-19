//#include<stdio.h>
//#include<stdlib.h>
//#define N 100
//typedef int ElemType;
//typedef struct{
//	ElemType elem[N];
//	int length;
//}SqList;
//SqList *CreatList(){
//	SqList *L;
//	L=(SqList *)malloc(sizeof(SqList));
//	if(!L)
//		return 0;
//	else{
//		L->length=0;
//		return L;}
//}
//void AssignList(SqList *L){
//	int i;
//	printf("输入顺序表长度");
//	scanf("%d",&L->length);
//	for(i=0;i<L->length;i++)
//		scanf("%d",&L->elem[i]);
//
//}
//void OutputList(SqList *L){
//	int i;
//	printf("顺序表长度为：%d\n",L->length);
//	for(i=0;i<L->length;i++)
//		printf("%d",L->elem[i]);
//}
//int InerstList(SqList *L,int i,ElemType e ){
//	int j;
//	if(i<1 || i>L->length+1)
//		return 0;
//	if(L->length>=N)
//		return 0;
//	for(j=L->length;j>=i;j--)
//		L->elem[j+1]=L->elem[j];
//		L->elem[i]=e;
//		L->length++;
//		return 1;
//}
//int DeletList(SqList *L,int w){
//	int k;
//	if(w<0 || w>L->length+1)
//		return 0;
//	if(L->length==0)
//		return 0;
//	for(k=w;k<=L->length-1;k++)
//		L->elem[k]=L->elem[k+1];
//		L->length--;
//		return 1;
//}
//
//int main(){
//	SqList *L;
//	L=CreatList();
//	AssignList(L);
//	InerstList(L,3,8);
//	DeletList(L,5);
//	OutputList(L);
//	system("pause");
//}
