#include <stdio.h>

#define SIZE 9

int main(void) {
	int arr[SIZE] = { 3, 24, 5, 7, 20, 10, 9, 4, 44 };
	int key = 10;

	for(int i = 0; i <SIZE;i++)
		if(arr[i] == key)
			printf("탐색 성공 : arr[%d]에서 %d(을)를 찾았습니다.\n", i, key);
}