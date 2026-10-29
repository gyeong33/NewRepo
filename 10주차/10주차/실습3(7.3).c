#include <stdio.h>

int main(void) {
	printf("7.3 배열의 크기 알아내고 복사하기 실습");

	int score[] = { 94, 82, 95, 77, 89 };
	int size, i;

	size = sizeof(score) / sizeof(score[0]); // sizeof(score)는 20, sizeof(score[0])는 4이므로 size는 5가 된다.
	printf("배열의 크기 = %d\n", size);
	for (i = 0; i < size; i++)
		printf("score[%d] = %d\n", i, score[i]);
}