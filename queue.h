// Bliss Brass

// Disables VS error warning for scanf()
#pragma warning(disable:4996)

#include <stdio.h>
#include <stdbool.h>

#ifndef QUEUE_H
#define QUEUE_H

#define MAX 10

struct queue {
	char car;
	int front;
	int back;
	bool start;

};

char arr[MAX];

int enqueue(char d);
char dequeue(void);
int isEmptyQ(void);
int isFullQ(void);
int listQueueContents(void);

#endif