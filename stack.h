// Bliss Brass

// Disables VS error warning for scanf()
#pragma warning(disable:4996)

#include <stdbool.h>
#include <stdio.h>

#ifndef STACK_H
#define STACK_H

// Unneccesary added complexity with a struct

struct stack {
	double value;
};

//int top;
struct stack framez[10];

int push(double d);
double pop(void);
double peek(void);
int isEmpty(void);
int isFull(void);
int listStackContents(void);

#endif