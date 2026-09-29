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
	*/

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
}