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

#include "stackArray.h"
#include <stdio.h>

void insertBottom(Stack *S, char X);

int main() {
    Stack S;
    initStack(&S);

    int n = 0;
    char input = ' ';
    printf("Enter the number of elements you would like to push to the stack initially: ");
    scanf("%d", &n);
    for (int ndx = 0; ndx < n && ndx < MAX; ndx++) {
        if (isFull(S) == false) {
            printf("Enter character input: ");
            scanf(" %c", &input);
            push(&S, input);
        }
    }

    printf("Stack before insertion: \n");
    displayStack(S);

    fflush(stdin);
    printf("Enter a character you wish to insert at the bottom: ");
    scanf(" %c", &input);

    insertBottom(&S, input);

    printf("Stack after insertion: \n");
    displayStack(S);

    return 0;
}

void insertBottom(Stack *S, char X) {
    if (isFull(*S) == false) {
        Stack temp;
        char topCharacter;
        initStack(&temp);
        while (isEmpty(*S) == false) {
            topCharacter = top(*S);
            pop(S);
            push(&temp, topCharacter);
        }
        push(S, X);
        while (isEmpty(temp) == false) {
            topCharacter = top(temp);
            pop(&temp);
            push(S, topCharacter);
        }
    }
}