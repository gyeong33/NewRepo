#include <stdio.h>
#define SIZE 5

//list 배열과 그 배열의 크기 n을 받아서 정렬을 수행
void bubble_sort(int list[], int n)
{
	int i, j, temp;

	for (i=n-1;i>0;i--)
		for (j = 0;j < i;j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
}

int main(void)
{

	int arr[SIZE] = { 24, 5, 7, 3, 20 };

	bubble_sort(arr, SIZE);
	printf("버블 정렬 후 데이터: ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
}