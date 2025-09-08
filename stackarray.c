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

#include "stackarray.h"
#include <stdio.h>

void initStack(Stack *S){
    S->top = -1;
}
void push(Stack *S, char X){
    if (!isFull(*S)){
        S->data[++S->top] = X;
    }
}
void pop(Stack *S){
    if (!isEmpty(*S)){
        S->top--;
    }
}

char top(Stack S){ 
    if (!isEmpty(S)){
        return S.data[S.top];
    } 
}
bool isEmpty(Stack S){
    return (S.top <= -1) ? true : false;
}
bool isFull(Stack S){
    return (S.top == MAX - 1) ? true : false;
}

void displayStack(Stack S){ 
    printf("Stack: \n");
    if (isEmpty(S)){
        printf("Empty!\n ");
    }

    while (!isEmpty (S)){
         char data = top(S);
         printf("|%c|\n", data);
         pop(&S);
    }
    printf("---\n ");
}
