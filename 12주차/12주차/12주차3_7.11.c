#include <stdio.h>

int binary_search(int arr[], int low, int high, int x)
{
	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (arr[mid] == x)
			return mid;
		else if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int main(void) {
	int arr[] = { 3, 4, 5, 7, 9, 10, 20, 24, 44 };
	int key = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int result = binary_search(arr, 0, size - 1, key);

	if(result == -1)
		printf("키 %d가 arr 배열 원소에 없음\n", key);
	else
		printf("탐색 성공 arr[%d]에서 %d(을)를 찾았습니다.\n", result, key);
	return 0;
}