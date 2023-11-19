#include<stdio.h>
#include<string.h>

int main(){
    int count,i,posi,len,j;
    char ch[1000];
    count=0;
    gets(ch);
    len=strlen(ch);
    for(i=0;i<len;i++){
        if(ch[i]==6&&count<3){
            count++;
            continue;
        }
        posi=i;
        if(count>3&&count<9&&ch[i+count]!=6){
            ch[i]=9;
            for(j=posi+count+1;j<len;j++)
                ch[j-count]=ch[j];
        }
        if(count>9&&ch[i+count]!=6){
            ch[i]=2;
            ch[i+1]=7;
            for(j=posi+count+1;j<len;j++)
                ch[j-count-1]=ch[j];
		}
        }
	printf("%s",ch);
	system("pause");
    return 0;
}