	#include <stdio.h>
	int main() {
		int num1, num2;
		// Input two numbers
		printf("Enter first number: ");
		scanf("%d", &num1);
		printf("Enter second number: ");
		scanf("%d", &num2);
		// Check if one number is multiple of other
		if (num1 == 0 || num2 == 0) {
			printf("Zero is not valid for this operation\n");
		}
		else if (num1 % num2 == 0) {
			printf("%d is a multiple of %d\n", num1, num2);
		}
		else if (num2 % num1 == 0) {
			printf("%d is a multiple of %d\n", num2, num1);
		}
		else {
			printf("Neither number is a multiple of the other\n");
		}
		return 0;
	}