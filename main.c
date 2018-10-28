// Bliss Brass 10-22-18
// ECE 361 HW 3
// Implementing a Stack and a Queue with an array



#include "queue.h"
#include "stack.h"

int main() {
	double number = 0;
	int choice = 0;
	char c;
	
	printf("For Stack press 1\nFor Queue press 2\n");
	scanf("%d", &choice);
	
	// Switch for Array or Queue
	switch (choice) {
	case 1:

		// Menu for Stack
		while (true) {
			printf("1) to Push\n2) to Pop\n3) to Peak\n4) To display contents of the Stack\n5) to exit: ");
			scanf("%d", &choice);

			switch (choice) {
			case 1:
				push(number);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				listStackContents();
				break;
			case 5:
				return 0;
			}
		}
	case 2:

		// Menu for Queue
		while (true) {
			printf("\n1) to Enqueue\n2) to Dequeue\n3) Display contents of the Queue\n4) to exit: ");
			scanf("%d", &choice);

			switch (choice) {
			case 1:
				printf("Enter a character to queue up: ");
				scanf(" %c", &c);
				enqueue(c);
				break;

			case 2:
				c = dequeue();
				break;

			case 3:
				choice = listQueueContents();
				printf("\nTotal number of entries was %d\n", choice);
				break;

			case 4:
				return 0;
			}
		}
	}	
}