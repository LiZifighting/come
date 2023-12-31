#include <stdio.h>
int main()
{
	int n;
	char c;
	int i = 0, j = 0, k = 0, sum = 1;//因为n是正整数，n至少为1，则沙漏至少有一行，则sum直接从第一行的符号数开始累加，后面检测行号时，也不必再检测第一行
	scanf("%d %c", &n, &c, &c);//接收数据，以空格相隔
	//1 3 5 7 9 …… 2i-1 - 下半部分，每行符号数量的变化规律
	//2i-1 2i-3 …… 3 1（上半部分和下半部分的1是重复的） - 下半部分，每行符号数量的变化规律
	//可以设置循环一层层拓展，当sum>n时，循环结束，按sum<n的最大值情况下的规格打印每行的空格和符号
	for(i=2;(sum+2*(2*i-1))<=n;i++)//i表示目前准备加的新层的层号。如要加第二层，新层要用的符号数为2*(2*2-1)=6
	{
		sum += 2 * (2 * i - 1);//计算出目前布置的沙漏总共要用到多少符号
	}
	//此时循环结束，最后一次判断符号数足够添加新层的层号是i-1(最后一次判断通过后，加了新层，i++。再进行判断，判断失败，不足以添加新层，所以此时i比最高可添加层号大1)
	//因为后面要循环打印各层，先从最大层号打印到1层，后又要从1层打印到最大层号。所以要使用n记住i的最大层号
	sum=n-sum;//存储不足以组成沙漏新层的符号的数量
    n = i - 1;//存储最大行号
	for (i = i - 1; i >= 1; i--)//i从最大层开始打印，一直打印到第1行，把整个上半部分打印完成
	{
		j = n - i;//计算本行空格数（每行都不一样，所以每轮循环都要计算一遍）
		while (j--)	printf(" ");//每小一层，符号序列前面要多一个空格
		k = 2 * i - 1;//当前行要输出的符号数
		while (k--) printf("%c",c);
		printf("\n");
	}
	for (i = 2; i <= n; i++)//i从2层开始打印
	{
		j = n - i;
		while (j--)	printf(" ");//每小一层，符号序列前面要多一个空格
		k = 2 * i - 1;
		while (k--) printf("%c", c);
		printf("\n");
	}
	printf("%d",sum);
	system("pause");
	return 0;
}
