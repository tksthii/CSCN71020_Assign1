#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();

int main (void) {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		break;
	case 2:
		subtract();
		break;
	default:
		printf("Invalid option.\n");
		break;
	}
	return 0;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
		double num1, num2, result;
		printf("Enter the first value:");
		if (scanf_s("%lf", &num1) != 1) {
			printf("Invalid number.\n");
			return;
		}
		printf("Enter the second value:");
		if (scanf_s("%lf", &num2) != 1) {
			printf("Invalid number.\n");
			return;
		}
		result = num1 - num2;
		printf("%lf - %lf = %lf\n", num1, num2, result);
}
