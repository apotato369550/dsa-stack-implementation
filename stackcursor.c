#include <stdio.h>
#include <stdbool.h>
#include "stackcursor.h"

// make the rest of the functions here
void initVirtualHeap(Stack *S) {
    int length = MAX - 1;
    for (int ndx = 0; ndx < length; ndx++) {
        S->Elem[ndx].link = ndx;
    }   
    S->Avail = MAX;
    S->List = -1;
}

int allocSpace(Stack *S) {
    int ptr = S->Avail;
    if (ptr = -1) {
        S->Avail = S->Elem[ptr].link;
    }
    return ptr;
}

int deallocSpace(Stack *S, int index) {
    S->Elem[index].link = S->Avail;
    S->Avail = index;
}

void push(Stack *S, char X) {
    // uses look-ahead
    int newNode = allocSpace(S);
    if (newNode != -1) {
        S->Elem[newNode].data = X;
        S->Elem[newNode].link = S->Elem[S->List].link;
        S->Elem[S->List].link = newNode;
    }
}

void pop(Stack *S) {
    if (S->List != -1) {
        int temp = S->List;
        S->List = S->Elem[S->List].link;
        deallocSpace(S, temp);
    }
}

char top(Stack *S) {
    return S->Elem[S->List].data;
}

bool isEmpty(Stack *S) {
    return (S->List == -1) ? true : false;
}

bool isFull(Stack *S) {
    return (S->Avail == -1) ? true : false;
}