////#include<stdio.h>
////#define N 4
////#define M 5
////#include<malloc.h>
////
////typedef struct sqlist{
////	int a[N][M];
////	int length;
////}sqlist;
////sqlist * Creatlist(){
////	sqlist *L;
////	L=(sqlist *)malloc(sizeof(sqlist));
////	L->length=0;
////}
////int main()
////{
////	int a[N][M],i,j;
////	
////	for(i=0;i<N;i++){
////		for(j=0;j<M;j++)
////			scanf("%d",&a[i][j]);
////	}
////
////}
//#include<stdio.h>
//#define MAXSIZE 100
//#include<stdlib.h>
//typedef struct List{
//	int age;
//	float sorce[2];
//	char name;
//}student;
//typedef struct QueueList{
//	student * meimei;
//	int length;
//}QueueList;
//QueueList *creatlist(){
//	QueueList *L;
//	L=(QueueList *)malloc(sizeof(QueueList));
//	if(!L)
//		return 0;
//	else{
//		L->length=0;
//		return L;
//	}
//}
//void Assignlist(QueueList * J){
//	int i,e;
//	QueueList * L;
//	L=(QueueList *)malloc(sizeof(QueueList));
//	printf("请输入顺序表的长度：\n");
//	scanf("%d",&L->length);
//	for(e=0;e<L->length;e++){
//		printf("输入学生姓名：");
//		scanf("%s",L->meimei->name);
//		printf("输入学生的年龄：\n");
//		scanf("%d",&L->meimei->age);
//		printf("输入学生的各科成绩：\n");
//		for(i=0;i<2;i++)
//			scanf("%f",&L->meimei->sorce[i]);
//	}
//			
//}
//void output(QueueList * J){
//	int e,i;
//	QueueList * L;
//	L=(QueueList *)malloc(sizeof(QueueList));
//	printf("顺序表的长度：%d",L->length);
//	for(e=0;e<L->length;e++)
//		printf("学生姓名：%s",L->meimei->name);
//		printf("学生的年龄：%d",L->meimei->age);
//		printf("学生的各科成绩：\n");
//		for(i=0;i<2;i++)
//			printf("%f ",L->meimei->sorce[i]);
//					
//}
//int main(){
//	QueueList *L;
//	L=creatlist();
//	if(L==0)
//		printf("初始化顺序表失败");
//	else
//		printf("初始化顺序表成功");
//	Assignlist(L);
//	output(L);
//	system("pause");
//	
//		
//}
//
//
