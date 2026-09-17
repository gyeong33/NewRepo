#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	float height_cm, weight, bmi;

	// 사용자 입력
	printf("당신의 키는 얼마입니까(단위:cm)? ");
	scanf("%f", &height_cm);

	printf("당신의 몸무게는 얼마입니까(단위:kg)? ");
	scanf("%f", &weight);

	//BMI 계산
	float height_m = height_cm / 100.0; // cm를 m으로 변환
	bmi = weight / (height_m * height_m);

	// 결과 출력
	printf("당신의 체질량 지수 : %.2f\n", bmi);
	

	int x = 100, y;
	y = x++;

	printf("x = %d, y = %d\n",x,y);
	

	int a = 10, b = 14;

	if (a > b)
		printf("a는 b보다 큽니다.\n");
	else
		printf("a는 b보다 크지 않습니다.\n");
	

	int x, y;
	printf("두 정수를 입력하시오:");
	scanf("%d%d", &x, &y);

	printf("%d && %d의 결과값: %d\n", x, y, x && y);
	printf("%d || %d의 결과값: %d\n", x, y, x || y);
	printf("!%d의 결과값: %d\n", x, !x);
	*/

	int x = 20;

	printf("x = %d입니다.\n", x);
	x += 10;
	printf("x += 10; 의 결과 x = %d\n",x);
	x -= 10;
	printf("x -= 10; 의 결과 x = %d\n",x);

}