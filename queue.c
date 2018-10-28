// Bliss Brass

#include "queue.h"

// Queue Tracker Variables
char car;
int front = 0;
int back = 0;
bool full = false;

int enqueue(char d) {
	// Catches Full Cases
	if (isFullQ() == 1) {
		return 0;
	}
	
	// Inserts a first value into an empty Queue
	if (front == back) {
		arr[front] = d;
		printf("\nInserting %c at start\n", d);
		back = front + 1;
		
		if (back >= MAX) {
			back = 0;
		}

		return 1;
	}
	// Adds value to the Queue's tail
	else {

		arr[back] = d;
		printf("\nPlacing %c at %d \n", d, back);
		back = back + 1;

		if (back >= MAX) {
			back = 0;
		}

		if (back == front) {
			full = true;
		}

		return 1;
	}
}

char dequeue(void) {
	char c;
	if (isEmptyQ() == 1) {
		return 1;
	}

	else {
		full = false;

		c = arr[front];
		printf("\nDeleting %c \n", arr[front]);
		arr[front] = '\n';
		front = front + 1;

		if (front >= MAX) {
			front = 0;
		}

		return c;
	}

	return 0;
}

int isEmptyQ(void) {
	if ((front == back) && (full == false)) {
		printf("\nQueue is Empty!\n");

		return 1;
	}

	return 0;
}

int isFullQ(void) {
	if (full == true && back == front) {
		printf("\nQueue is FULL!!!\n");
		return 1;
	}

	return 0;
}

int listQueueContents(void) {
	int i = front;
	int count = 0;

	if (isEmptyQ() == 1) {
		return 0;
	}

	printf("\n");

	// Performs at least 1 increment for checking.
	// Aids in looping continuity so list will print in order regardless
	// of fronts array position.
	do {
		printf("In position %d of the Queue is %c \n", count, arr[i]);
		count++;
		i++;
		if (i >= MAX) {
			i = 0;
		}
	} while (i != back);

	return count;
}