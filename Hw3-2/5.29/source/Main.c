#include <stdio.h>
#include <stdlib.h>

// Function to calculate the Greatest Common Divisor (GCD) using Euclidean Algorithm
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Function to calculate the Least Common Multiple (LCM) using GCD
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int num1, num2;

	// Input two integers
	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("Enter the second integer: ");
	scanf("%d", &num2);

	// Call the lcm function and display the result
	printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
	system("pause");
	return 0;
}

