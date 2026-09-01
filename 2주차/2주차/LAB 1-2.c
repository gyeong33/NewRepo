#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1 = 100;
	int num2 = 200;
	int num3 = 300;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);

	printf("세 수의 합 num1 + num2 + num3 = %d\n", num1 + num2 + num3);
	printf("세 수의 평균 (num1 + num2 + num3)/3 = %d\n", (num1 + num2 + num3) / 3);

	return 0;
}