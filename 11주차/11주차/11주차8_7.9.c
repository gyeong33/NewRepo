#include <stdio.h>
#define SIZE 5
//출력함수
void printf_array(int arr[], int size) {
	for (int i = 0;i < size;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void get_twice(int arr[], int size) {
	for (int i = 0;i < size;i++)
		arr[i] *= 2;
}
int main(void) {
	int score[SIZE] = { 31, 63, 62, 87, 14 };//원본 배열

	printf("get_twice() 호출 이전 : ");
	printf_array(score, SIZE);//함수 호출
	get_twice(score, SIZE);
	printf("get_twice() 호출 이후 : ");
	printf_array(score, SIZE); //함수 호출 전 원본 배열
}