#include <stdio.h>
#include <stdlib.h>

char changeCase();

int main(void) {
	char input,result;

	// Input an alphabet character
	printf("Enter an alphabet character: ");
	scanf(" %c", &input);

	// Call the function to change the case
	result = changeCase(input);

	// Display the result
	printf("Changed: %c\n", result);

	system("pause");
	return 0;
}

char changeCase(char alphabet) {
	if (alphabet >= 'A' && alphabet <= 'Z') {
		// If the character is uppercase, convert to lowercase
		return alphabet + ('a' - 'A');
	}
	else if (alphabet >= 'a' && alphabet <= 'z') {
		// If the character is lowercase, convert to uppercase
		return alphabet - ('a' - 'A');
	}
	else {
		// If the character is not an alphabet character, return as is
		return alphabet;
	}
}