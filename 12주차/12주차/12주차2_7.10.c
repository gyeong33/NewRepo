#include <stdio.h>

#define SIZE 9

int search(int src[], int size, int key) {
	for (int i = 0;i < size;i++) {
		if (src[i] == key) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int arr[SIZE] = { 3, 24, 5, 7, 20, 10, 9, 4, 44 };
	int key = 10;

	int index = search(arr, SIZE, key);
	if (index != -1) {
		printf("탐색 성공 : arr[%d]에서 %d(을)를 찾았습니다.\n", index, key);
	}
	else {
		printf("탐색 실패 : %d(을)를 찾지 못했습니다.\n", key);
	}
}