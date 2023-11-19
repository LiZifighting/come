#include <stdio.h>

#define MAX_DIGITS 10000

void multiply(int result[], int *numDigits, int multiplier) {
	int i;
    int carry = 0;
    for (i = 0; i < *numDigits; i++) {
        int product = result[i] * multiplier + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry > 0) {
        result[*numDigits] = carry % 10;
        carry /= 10;
        (*numDigits)++;
    }
}

void factorial(int n) {
	int i;
	int numDigits;
    int result[MAX_DIGITS] = {1};
    numDigits = 1;

    for (i = 2; i <= n; i++) {
        multiply(result, &numDigits, i);
    }

    printf("%d的阶乘为：", n);
    for (i = numDigits - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("请输入一个大于等于12的整数：");
    scanf("%d", &num);

    //if (num < 12) {
    //    printf("输入错误！请输入一个大于等于12的整数。\n");
    //    return 0;
    //}

    factorial(num);
	system("pause");
    return 0;
}