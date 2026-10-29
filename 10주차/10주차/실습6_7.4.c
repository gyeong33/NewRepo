#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define RANGE 100

int main(void) {
	int arr[SIZE], i;

	//랜덤 시드 초기화
	srand((unsigned int)time(NULL));

	//1~100 사이의 난수 생성 및 배열 저장
	for (i = 0;i < SIZE;i++)
		arr[i] = rand() % RANGE + 1;

	for (i = 0;i < SIZE;i++)
		printf("%d ", arr[i]);
}