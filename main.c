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