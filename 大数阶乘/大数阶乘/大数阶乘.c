#include<stdio.h>
#define Digitnum 100000

void factorial(int n){
	int i,digitnum;
	int result[Digitnum]={1};
	digitnum=1;
	for(i=2;i<=n;i++){
		muntiply(result,&digitnum,i);
	}
	for(i=digitnum-1;i>=0;i--){
		printf("%d",result[i]);
	}
}

int muntiply(int *result,int *digitnum,int n){
	int i,temp;
	int carry=0;
	for(i=0;i<*digitnum;i++){
		temp=result[i]*n+carry;
		result[i]=temp%10;
		carry=temp/10;
	}
	while(carry>0){
		result[*digitnum]=carry%10;
		carry=carry/10;
		(*digitnum)++;
	}

}

int main(){
	int n;
	scanf("%d",&n);
	factorial(n);
	system("pause");
	return 0;
}