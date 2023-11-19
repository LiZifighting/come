#include <stdio.h>
#define LIST_SIZE 20
typedef  int KeyType;
typedef struct
{      KeyType key;
}RecordType;
typedef struct
{
    RecordType  r[LIST_SIZE+1];// ��r[1]��ʼ�������
    int length;
} RecordList;

void InsertSort(RecordList *L)/*�ȵ���ֱ�Ӳ������򣬰��ؼ��ִӴ�С��������*/// ʹ�ü�����
{
   int i,j;
   for(i=2;i<L->length;i++){
	   L->r[0]=L->r[i];
	   j=i-1;
	   while(L->r[0].key>L->r[j].key){
		   L->r[j+1]=L->r[j];
		   j--;
	   }
	   L->r[j+1]=L->r[0];
   }
}
void SelectSort( RecordList *L)/*�ٵ��ü�ѡ�����򣬰��ؼ��ִ�С�����������*/
/*��ѡ������*/
{
	int i,j,min;
	for(i=0;i<L->length;i++){
		min=i;
		for(j=i+1;j<=L->length;j++)
			if(L->r[j].key<L->r[min].key)
				min=j;
		if(min!=i){
			L->r[0]=L->r[i];
			L->r[i]=L->r[min];
			L->r[min]=L->r[0];
		}
	}
}
void bubsort(RecordList *L)/*�����øĽ���ð�����򣬰��ؼ��ִӴ�С��������*/
{
	int i,j,flag=1;
	for(i=2;i<L->length&&flag;i++){
		flag=1;
		for(j=0;j<L->length-i;j++)
		if(L->r[i-1].key<L->r[i].key){
			L->r[0]=L->r[i];
			L->r[i-1]=L->r[i];
			flag=1;
		}
	}

}
void display(RecordList x)
{
    int i;
    for(i=1;i<=x.length;i++)
        printf("%d ",x.r[i].key);
    printf("\n");
}

int  main()
{
    RecordList x;
    int i;
    //printf("���������Ա�ĳ���: ");
    scanf("%d",&x.length);
    for(i=1;i<=x.length;i++)
        scanf("%d",&x.r[i].key);
    InsertSort(&x);
    display(x);
    SelectSort(&x);
    display(x);
    bubsort(&x);
    display(x);
    return 0;
}