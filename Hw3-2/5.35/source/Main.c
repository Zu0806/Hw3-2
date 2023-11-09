#include <stdio.h>
#include <stdlib.h>

int fibonacci(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	int a = 0, b = 1;
	unsigned long long int result;

	for (unsigned int i = 2; i <= n; ++i) {
		result = a + b;
		a = b;
		b = result;
	}
	return result;
}

int main(void) 
{
	unsigned int n;

	printf("Fibonacci number:");
	scanf("%d", &n);

	printf("Largest Fibonacci number: %d\n", fibonacci(n - 1));
	system("pause");
	return 0;
}
