#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#define MAX 50

typedef struct {
    int link;
    char data;
} Node;

typedef struct {
    int Avail;
    Node Elem[MAX];
    int List;
} Stack;


void push(Stack *S, char X);
void pop(Stack *S);
char top(Stack *S);
bool isEmpty(Stack *S);
bool isFull(Stack *S);

#endif