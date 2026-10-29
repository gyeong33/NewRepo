#include <stdio.h>

int main(void) {
	int score[] = { 94, 82, 95, 77, 89 };
	int sum = 0, size, i;
	float average;

	size = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < size; i++)
		sum += score[i];
	average = (float)sum / size;
	printf("배열 원소의 합 : %d, 배열 원소의 평균 : %.2f\n", sum, average);
}