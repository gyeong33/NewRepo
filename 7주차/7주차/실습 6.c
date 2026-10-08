#include <stdio.h>

int is_prime(int n) {
	if (n < 2) return 0; // 0 and 1 are not prime numbers
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0; // n is divisible by i, so it's not prime
	}
	return 1; // n is prime
}

int main(void) {
	int number;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &number);

	if (is_prime(number))
		printf("%d은(는) 소수입니다.\n", number);
	else
		printf("%d은(는) 소수가 아닙니다.\n", number);
	
}