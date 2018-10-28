// Bliss Brass 10-22-18
// A recursive function

#include <stdio.h>

int maximum(int list[], int n);

int arr[] = { 50, 20, 1, 0, 90, 30, 5, 22, 90, 80 };

int main() {
	int count = 10;
	int max = 0;

	max = maximum(arr, count);

	printf("Max value is: %d", max);

	getchar();

	return 0;
}

int maximum(int list[], int n) {
	int maxy = 0;

	if (n >= 0) {

		maxy = maximum(list, n - 1);

		if (maxy < list[n]) maxy = list[n];

	}

	return maxy;
}