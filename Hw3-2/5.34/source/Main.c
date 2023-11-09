#include <stdio.h>
#include <stdlib.h>

// Recursive function to calculate power
int power(int base, int exponent) {
	// Base case: exponent is 0, return 1
	if (exponent == 0) 
		return 1;
	else 
		return base * power(base, exponent - 1);	
}

int main(void) {
	int base, exponent, result;

	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the exponent (greater than or equal to 1): ");
	scanf("%d", &exponent);

	result = power(base, exponent);
	printf("%d^%d = %d\n", base, exponent, result);

	system("pause");
	return 0;
}
