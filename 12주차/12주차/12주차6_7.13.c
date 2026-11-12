/*#include <stdio.h>

//선택 정렬 함수
void selection_sort(int arr[], int n) {
	for (int i = 0; i < n - 1;i++) {
		int min_index = i; //현재 위치를 최소값 인덱스로 설정

		//나머지 배열에서 최소값 찾기
		for (int j = i + 1; j < n;j++)
			if (arr[j] < arr[min_index])
				min_index = j;

		//최소값을 현재 위치와 교환
		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}

		//각 단계별 배열 상태 출력
		printf("단계 %d: ", i + 1);
		for (int k = 0; k < n; k++)
			printf("%d ", arr[k]);
		printf("\n");
	}
	selection_sort(arr, n);

	printf("정렬된 배열: ");
	for (int i = 0; i < n;i++)
		printf("%d ", arr[i]);
}
*/


#include <stdio.h>

// 선택 정렬 함수
void selection_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i; // 현재 위치를 최소값 인덱스로 설정

		// 나머지 배열에서 최소값 찾기
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}

		// 최소값을 현재 위치와 교환
		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}

		// 각 단계별 배열 상태 출력
		printf("단계 %d: ", i + 1);
		for (int k = 0; k < n; k++) {
			printf("%d ", arr[k]);
		}
		printf("\n");
	}
}

int main(void) {
	int arr[] = { 24, 5, 7, 3, 20 };
	int n = sizeof(arr) / sizeof(arr[0]); // 배열의 크기 자동 계산

	selection_sort(arr, n); // 정렬 함수 호출

	printf("정렬된 배열: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
