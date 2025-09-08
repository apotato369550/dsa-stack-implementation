#include <stdio.h>
#include <stdbool.h>
#include "stackLinked.h"

void initStack(Stack *S) {
    S->top = NULL;
}

//isFull()
bool isFull(Stack S){
    return false;
}

//isEmpty()  
bool isEmpty(Stack S){
    return (S.top != NULL) ? true : false;
}

//push()
void push (Stack *S, char data) {
    LIST temp = (LIST)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = S->top;
    S->top = temp; 
}

//pop()
void pop (Stack *S){
    if(isEmpty(*S) == false){
        LIST temp;
        temp = S->top;
        S->top = temp->next;
        free(temp);
    }  
}

//top() /
char top(Stack S){
   return S.top->data;
}

void displayStack(Stack S){
    char toPop;
    Stack temp;

    //transfer
    while(isEmpty(S)==false){
        Stack temp;
        toPop = top(S); 
        printf("|%c|\n", S.top->data); //printf("|%c|\n", S.Elem[trav].data);
        pop(&S);
        push(&temp, toPop);
    
    }

    //put back
    while(isEmpty(temp)==false){
        toPop = top(temp);
        pop(&temp);
        push(&S, toPop);
    }
}