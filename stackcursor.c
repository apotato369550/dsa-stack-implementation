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

}

void pop(Stack *S) {

}

char top(Stack *S) {

}

bool isEmpty(Stack *S) {

}

bool isFull(Stack *S) {

}