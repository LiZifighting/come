#include<stdio.h>
#define LIST_SIZE 20
typedef int KeyType;
typedef struct {
	KeyType key;
}RecordType;
typedef struct
{
	RecordType r[LIST_SIZE+1];
	int len;
}RecordList;
int SeqSearch(RecordList L, KeyType key)
{
	int i;
	for (i = 1; i <=L.len && L.r[i].key != key; i++);
		if (i == L.len+1)
			return 0;
		else
			return(i);
}
void main()
{
	int i, y, key;
	RecordList L;
	printf("请输入线性表的长度：");
	scanf("%d", &L.len);
	for (i = 1; i <= L.len; i++)
		scanf("%d", &L.r[i].key);
	scanf("%d", &key);
	y = SeqSearch(L, key);
	printf("%d\n", y);
}