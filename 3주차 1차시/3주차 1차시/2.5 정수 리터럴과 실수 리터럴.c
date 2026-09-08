#include <stdio.h>

#define PI 3.14159 // 매크로 상수 정의
#define CIRCLE_AREA(r) (PI * (r) * (r)) // 원의 넓이 계산 매크로
#define SQUARE(x) (x * x) //제곱을 계산하는 함수 매크로

int main(void) {
	/*
	// 10진수 리터럴
	int decimal = 338; //10진수
	printf("10진수: %d\n", decimal);

	//8진수 리터럴
	int octal = 033; //8진수

	printf("8진수 (10진수로 출력): %d\n", octal);
	printf("8진수 (8진수로 출력): %o\n", octal);

	//16진수 리터럴
	int hex = 0x1F; //16진수
	printf("16진수 (10진수로 출력): %d\n", hex);
	printf("16진수 (16진수로 출력): %X\n", hex);

	//2진수 리터럴
	int binary = 0b1100; //2진수 (dkvdp 0b로 시작, GCC 확장 버전에 있음.)
	printf("2진수 (10진수로 출력): %d\n", binary);
	return 0;
	*/

	// --------------------------------

	/*
	int num1 = 0; //변수를 선언만 하면 프로그램이 제대로 실행되지 않음
	int num2 = num1 + num1;
	printf("num1 =  %d\n", num1);
	printf("num2 =  %d\n", num2);

	num1 = 100;
	num2 = num1 + num1;
	printf("num1 =  %d\n", num1);
	printf("num2 =  %d\n", num2);
	*/

	// --------------------------------

	/*
	//변수 정수 초기화
	int n1 = 34;
	int n2 = 22;
	int n3 = 40;

	//합과 평균 저장 변수 선언
	int sum;
	float avg;
	
	sum = n1 + n2 + n3;
	avg = sum / 3.0; //평균은 소수점까지 계산하기 위해 3.0으로 나눔(실수 평균 계산)

	//출력문
	printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
	printf("세 수의 합: %d\n", sum);
	printf("세 수의 평균: %.2f\n", avg);
	*/

	// --------------------------------
	
	/*
	int radius = 5;
	printf("반지름이 %d인 원의 면적: %.2f\n", radius, CIRCLE_AREA(radius)); // (r)이 들어갈 자리에 radius라는 변수값이 들어감.
	return 0;
	*/

	// --------------------------------

	int num = 4;
	printf("%d의 제곱: %d\n", num, SQUARE(num));
	printf("%d + %d의 제곱: %d\n", num, 1, SQUARE(num + 1)); //주의필요

	//매크로는 오류가 나면 찾기가 굉장히 어려워서 최근에는 많이 지원하지 않음
	//but 잘 쓰면 굉장히 좋음.


}