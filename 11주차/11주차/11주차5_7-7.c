#include <stdio.h>
#define SIZE 5

int get_max(int arr[], int size) {
	int max = arr[0];

	for(int i=1; i<size;i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int main(void) {
	int score[SIZE] = { 31, 63, 62, 87, 14 };

	printf("배ㅕㅇㄹ 원소의 최대값 = %d\n", get_max(score, SIZE));
	return 0;
}