#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size;
	printf("배열 크기 입력: ");
	scanf_s("%d", &size);

	// malloc을 사용한 동적 메모리 할당
	int* arr = (int*)malloc(size * sizeof(int));

	//메모리 할당 실패 여부 확인
	if (arr == NULL) {
		printf("메모리 할당 실패!\n");
		return 1;
	}

	//배열 초기화 및 출력
	for (int i = 0; i < size; i++) arr[i] = i;
	for (int i = 0; i < size;i++) printf("%d ", arr[i]);

	//동적 메모리 해제
	free(arr);
}