#include <stdio.h>

int main(void) {
	int arr[3][2][5] = {
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

	for (int i = 0; i < 3;i++) {
		printf("Ãþ %d:\n", i);
		for (int j = 0;j < 2;j++) {
			for (int k = 0;k < 5;k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\n");
		}
	}
}