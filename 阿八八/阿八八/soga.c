#include <stdio.h>
#include <stdlib.h>
#define Stack_size 30
typedef int elemtype;
typedef struct node {
    elemtype  data;
    struct   node* next;
}NODE, * LINKLIST;   //结点类型定义
typedef struct {
    NODE* elem[Stack_size];   //注意栈中元素的类型
    int top;
}SeqStack;//顺序栈定义
LINKLIST createlistf()//尾插法创建链表
{
    int len, i;
    LINKLIST  head;NODE* p, * r;
    head = (LINKLIST)malloc(sizeof(NODE));//创建头结点
    r = head;
    scanf_s("%d", &len);
    for (i = 0;i < len;i++) {
        p = (NODE*)malloc(sizeof(NODE));
        scanf_s("%d", &p->data);
        r->next = p;
        r = p;
    }
    r->next = NULL;
    return (head);
}
void printlink(NODE* h) {
    NODE* p;
    p = h->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}
void InitStack(SeqStack* s) {
    s->top = -1;
}
int Push(SeqStack* s, NODE* x) {
    NODE* E = 0;
    if (s->top == Stack_size - 1) {
        printf("栈满");
        return(0);
    }
    s->top++;
    s->elem[s->top] = x;
    return(1);
}
int Pop(SeqStack* s, NODE** x) {
    if (s->top == -1) {
        printf("栈空");
        return 0;
    }
    *x = s->elem[s->top];
    s->top--;
    return(1);
}
int IsEmpty(SeqStack s) {
    if (s.top == -1)
        return 1;
    else
        return 0;
}
void nizhi(LINKLIST L)   //利用栈实现单链表的逆置，补充此函数
{
    SeqStack s;
    NODE* p;
    NODE* rear = L;      //尾节点
    NODE* q;
	int i;
	InitStack(&s);
    p = L->next;
    while (p != NULL)
    {
        Push(&s, p);

        p = p->next;

    }

    while (!IsEmpty(s))

    {
        Pop(&s, &q);

        rear->next = q;

        rear = q;

    }
    rear->next = NULL;
}

int main() {
    LINKLIST  L;
    L = createlistf();   //输入数据元素,输入的第一个数字为单链表的长度
    nizhi(L);
    printlink(L);//逆置后遍历链表
    system("pause");
    return 0;
}