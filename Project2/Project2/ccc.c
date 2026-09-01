#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double num1, num2;
	printf("첫번째 숫자를 입력하세요: ");
	scanf("%lf", &num1);
	printf("두번째 숫자를 입력하세요: ");
	scanf("%lf", &num2);

	printf("입력한 숫자는 %.2lf와 %.2lf입니다.\n", num1, num2);
	
	printf("덧셈 결과 : %.2lf\n", num1 + num2);
	printf("뺄셈 결과 : %.2lf\n", num1 - num2);
	printf("곱셈 결과 : %.2lf\n", num1 * num2);
	printf("나눗셈 결과 : %.2lf\n", num1 / num2);

}