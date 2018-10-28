// Bliss Brass

#include "stack.h"
#include <math.h>

int top = -1;

int push(double d) {

	// Checks to see if the stack is first full
	if (isFull() == 1) {return 0;}
	else {
		// Requests user input and then increments top and adds the value to top's array location
		printf("\nPush a value to the Stack\n");
		printf("Enter a value ");
		scanf("%lf", &d);

		printf("\nThat value is %lf \n\n", d);

		top++;
		framez[top].value = d;

		return 1;
	}
}

double pop(void) {
	// Checks to see if stack is empty then decrements top
	if (isEmpty() == 1) { return NAN; }
	else {
		printf("\nDeleting... %f \n\n", framez[top].value);
		top--;
		return framez[top + 1].value;
	}
}

double peek(void) {
	// Checks if statack is empty then returns the value at the top
	if (isEmpty() == 1) { return NAN; }
	else {
		printf("\nThe top of the Stack is: %f \n\n", framez[top].value);
		return framez[top].value;
	}
}

int isEmpty(void) {
	if (top == -1) {
		printf("\nEmpty Stack\n\n");
		return 1;
	}
	else { return 0;}
}

int isFull(void) {
	if (top == 9) {
		printf("\nFull Stack!\n\n");
		return 1;
	}
	else { return 0; }
}

int listStackContents(void) {
	int i = 0;
	if (isEmpty() == 1) {
		return 0;
	}
	else {
		for (i = top; i >= 0; i--) {
			printf("Stack value %lf in stack position %d \n", framez[i].value, i);

		}
	}
	return 0;
}
