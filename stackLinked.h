#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10

typedef struct node {
    char data;
    struct node *next;
} *LIST;

typedef struct {
    LIST top;
} Stack;

void initStack(Stack*);

bool isFull(Stack);

bool isEmpty(Stack);

void push (Stack*, char);

void pop (Stack *S);

char top(Stack S);

void displayStack(Stack S);

#endif