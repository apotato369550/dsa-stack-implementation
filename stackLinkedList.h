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
