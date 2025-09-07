#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10

typedef struct node {
    int data;
    struct node *next;
} *LIST;

typedef struct {
    LIST top;
} Stack;

void init(Stack *S) {
    S->top = NULL;
}
