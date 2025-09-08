/*****************************************************
----- Group Members -----
Kyer Ivan Jayme - Member 1
Chelsea Rose Pimentel - Member 2
John Andre Yap - Member 3 (+ cursor based)

----- Program Description -----
A program that implements a stack in the following implementations:
 1. ArrayList
 2. LinkedList
 3. Cursor-Based

----- How To Run -----
1. Copy files to local repository
2. (using gcc) Run the command "gcc main.c <implementation_filename>.c"
3. Run the .exe created: "./a.exe"
4. Enjoy

----- Date Finished -----
September 8, 2025

----- Submitted To -----
Christine Pena

*****************************************************/

#ifndef STACKARRAY_H
#define STACKARRAY_H

#include <stdbool.h>
#define MAX 10

typedef struct {
    char data[MAX];
    int top;
} Stack;

void initStack(Stack *S);
void push(Stack *S, char X);
void pop(Stack *S);
char top(Stack S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void displayStack(Stack S);

#endif
