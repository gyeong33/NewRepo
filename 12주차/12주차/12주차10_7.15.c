#include <stdio.h>
#define DEPTH 3
#define ROWS 2
#define COLS 5

int main(void) {
	int arr[DEPTH][ROWS][COLS] = {
		{
			{0, 1, 2, 3, 4},
			{5, 6, 7, 8, 9},
		},
		{
			{4, 5, 6, 7, 8},
			{8, 9, 10, 11, 12},
		},
		{
			{5, 6, 7, 8, 9},
			{1, 2, 3, 4, 5},
		}
	};

	for (int i = 0; i < DEPTH;i++) {
		int sum = 0; //현재 층의 합 초기화

		//해당 층의 모든 요소 합산
		for (int j = 0;j < ROWS;j++) {
			for (int k = 0;k < COLS;k++) {
				sum += arr[i][j][k];
			}
		}
		printf("층 %d의 합: %d\n", i, sum);
	}
}

