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
