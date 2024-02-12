#include <stdio.h>
#include <stdbool.h>
#include "main.h"

void main() {
	int length, width;
	bool continueProgram = true;
	while (continueProgram) {
		printWelcomeMenu();

		printOptions();

		int menuInput;
		menuInput = getIntInput("Enter menu option number:");

		switch (menuInput)
		{
			case 1:
			{
				printf("The Rectangle has a length of %i and a width of %i\n\n", length, width);
				break;
			}
			case 2:
			{
				int input = getIntInput("Please enter the length of the rectangle:");
				setLength(input, &length);
				break;
			}
			case 3:
			{
				int input = getIntInput("Please enter the width of the rectangle:");
				setWidth(input, &width);
				break;
			}
			case 4:
			{
				printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
				break;
			}
			case 5:
			{
				printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
				break;
			}
			case 6:
			{
				continueProgram = false;
				break;
			}
			default:
			{
				printf("\nInvalid value entered.\n\n");
				break;
			}
		}
	}
}

int getIntInput(char message[]) {
	int input;
	int scannedValues;
	do {
		printf("\n%s\n",message);
		scannedValues = scanf_s("%i", &input);
		int buf;
		while ((buf = getchar()) != '\n' && buf != EOF);
	} while (scannedValues != 1);
	return input;
}

void setLength(int input, int *length) {
    *length = input;
	if (input < 0) {
		printf("Invalid value. Please enter a postive number.\n");	
	} 
	if (input > 100){
		printf("Invalid value. Please enter a number under 100.\n");
	} 
}

void setWidth(int input, int *width) {
	*width = input;
	if (input < 0) {
		printf("Invalid value. Please enter a postive number.\n");
	}	
	if (input > 100) {
		printf("Invalid value. Please enter a number under 100.\n");

	}
}

int getPerimeter(int *length, int *width) {
	int perimeter = (2*(*length + *width));
	return perimeter;
}

int getArea(int *length, int *width) {
	int area = *length * *width;
	return area;
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**     Welcome to     **\n");
	printf("**    Assignment 02   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Get Rectange Length & Width\n");
	printf("2. Change Rectangle Length\n");
	printf("3. Change Rectangle Width\n");
	printf("4. Get Rectangle Perimeter\n");
	printf("5. Get Rectangle Area\n");
	printf("6. Exit\n");
}