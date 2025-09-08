#ifndef STACKARRAY_H
#define STACKARRAY_H

#include <stdbool.h>
#include <stdio.h>
#define MAX 10

typedef struct {
    char data[MAX];
    int top;
} Stack;

void initStack(Stack *S);
void push(Stack *S, char X);
void pop(Stack *S);
char top(Stack *S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void displayStack(Stack S);

#endif