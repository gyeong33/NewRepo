#include <stdio.h>

int main(void)
{
	/*
	int mile2meter = 1609;

	printf("%d 마일은 %d 미터입니다\n", 1, 1 * mile2meter);
	printf("%d 마일은 %d 미터입니다\n", 2, 2 * mile2meter);
	printf("%d 마일은 %d 미터입니다\n", 3, 3 * mile2meter);
	printf("%d 마일은 %d 미터입니다\n", 4, 4 * mile2meter);
	

	
	int meter, mile2meter = 1609;

	for (int i = 1; i <= 10; i++) { // i의 초기값을 1로 지정 후 10이 될때까지 1씩 더하며 반복
		meter = i * mile2meter;
		printf("%d 마일은 %d 미터입니다\n", i, meter);
	}
	int i;

	for (i = 0; i <= 10; i += 2)
	{
		printf("%d", i);
	}

	printf("\n");
	for (i = 10; i > 0; i--)
	{
		printf("%d", i);
	}
	

	int arr[] = { 10, 20, 30, 40, 50 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("arr[%d] = %d\n", i, arr[i]);
	
	int i = 0;

	while(i < 5) {
		printf("Hello ");
		i++;
	}

	int num;

	do {
		printf("정수를 입력하세요 (-1을 입력하면 종료): ");
		scanf_s("%d", &num);

		if (num != -1) {
			printf("입력한 값은 %d 입니다.\n", num);
		}
	} while (num != -1);
	

	int i = 0;

	do {
		printf("1---새 파일		2---파일 열기\n");
		printf("#---파일 닫기		4---파일 저장\n");
		printf("하나를 선택하시오 : ");
		scanf_s("%d", &i);
	} while (i < 0 || i>4);
	printf("선택된 메뉴 = %d\n", i);
	


	int n;
	
	do {
		printf("100부터 999까지의 정수를 입력하세요: ");
		scanf_s("%d", &n);
		if (n < 100 || n > 900) {
			printf("잘못된 입력입니다. 다시 입력하세요.\n");
		}
	} while (n < 100 || n>900);

	int hundreds = n / 100;
	int tens = (n / 10) % 10;
	int ones = n % 10;

	printf("입력한 정수:%d\n", n);
	printf("백의 자리: %d\n", hundreds);
	printf("십의 자리: %d\n", tens);
	printf("일의 자리: %d\n", ones);

	

	int m[2][3] = { {1, 2, 3}, {4, 5, 6} };


	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("m[%d][%d] = %d", i, j, m[i][j]);
		}
		printf("\n");
	}
	*/
	
	int m[2][3] = { {1, 2, 3}, {4, 5, 6} };


	for (int i = 1; i < 2; i++) {
		for (int j = 1; j <= 3; j++) {
			printf("i = %d, j = %d, ", i, j);
		}
		printf("\n");
	}
	
}