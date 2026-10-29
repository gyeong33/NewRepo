#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define RANGE 100

int main(void) {
	int arr[SIZE];
	int count[RANGE + 1] = { 0 };
	int i, mode = 0, max_freq = 0;

	//랜덤 시드 초기화
	srand((unsigned int)time(NULL));

	//1~100 사이의 난수 생성 및 배열 저장
	for (i = 0;i < SIZE;i++)
		arr[i] = rand() % RANGE + 1;
		count[arr[i]]++;

	for (i = 1;i <= SIZE;i++) {
		if (count[i] > max_freq) {
			max_freq = count[i];
			mode = i;
		}
	}

	printf("가장 자주 등장한 값: %d\n", mode);
	printf("출현 횟수: %d회 \n", max_freq);
}