#include<stdio.h>

#define maxsize 15

typedef struct{

    char elem[maxsize];

    int len;

}strType;

int insert(strType *s1,strType s2,int pos){

    int i,k;

    if(pos>=s1->len)

        return 0;

    for(k=s1->len;k>=pos;k--)

        s1->elem[k-1+s2.len]=s1->elem[k-1];

    for(i=0;i<s2.len;i++)

         s1->elem[pos+i]=s2.elem[i];

     return 1;

        

}

int main(int argc,const char * argv[]){

    strType s1,s2;

    int pos;

    scanf("%d ",&s1.len);

	gets(s1.elem);

    scanf("%d %d ",&pos,&s2.len);

    gets(s2.elem);

    insert(&s1,s2,pos)==1?printf("%s",s1.elem):printf("error!");

	system("pause");

    return 0;


}

