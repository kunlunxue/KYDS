#ifndef STACK_H
#define STACK_H
// Macron
// max size of the stack
#define MAX_SIZE 7

typedef struct
{
    int data[MAX_SIZE];
    int TOP;
} Stack;

// Initialize the array linear stack
int Initialize(Stack *stack);

// IsEmpty

int IsEmpty(Stack *stack);
// IsFull
int IsFull(Stack *stack);
// Push Add
int Push(Stack *stack, int data);
// Pop  Delete
int Pop(Stack *stack);
// Peek  Query
int Peek(Stack *stack);
// Traverse Query Update
void Traverse(Stack *stack);
#endif
