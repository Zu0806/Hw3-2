#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
	if (n == 1) {
		printf("1 -> %c\n", destination);
		return;
	}

	towerOfHanoi(n - 1, source, auxiliary, destination);
	printf("%d -> %c\n", n, destination);
	towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
	int numDisks;

	// Input the number of disks
	printf("Enter the number of disks: ");
	scanf("%d", &numDisks);

	// Call the towerOfHanoi function
	towerOfHanoi(numDisks, 'A', 'C', 'B');
	system("pause");
	return 0;
}
