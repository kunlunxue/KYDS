#include <stdio.h>
#include "stack.h"

int Initialize(Stack *stack)
{
    // Set the pointer of the top of stack to be -1 instead of null as linked stack

    stack->TOP = -1;
    return 1;
}

int IsEmpty(Stack *stack)
{
    return stack->TOP == -1;
}

int IsFull(Stack *stack)
{
    return stack->TOP == (MAX_SIZE - 1);
}

int Peek(Stack *stack)
{
    if (!IsEmpty(stack))
    {
        printf("The top of the current stack is %d", stack->data[stack->TOP]);
        return stack->data[stack->TOP];
    }
    else
    {
        printf("The stack is empty!\n");
        return -1;
    }
}

int Push(Stack *stack, int data)
{
    if (IsFull(stack))
    {
        printf("The stack is full!\n");
        return -1;
    }
    else
    {

        stack->data[++stack->TOP] = data;
        printf("Element pushed!%d\n", data);
        return data;
    }
}
int Pop(Stack *stack)
{
    if (IsEmpty(stack))
    {
        printf("The Stack is empty!\n");
        return -1;
    }
    else
    {

        printf("Element poped %d\n", stack->data[stack->TOP]);
        return stack->data[stack->TOP--];
    }
}

void Traverse(Stack *stack)
{
    if (!IsEmpty(stack))
    {
        int temp = stack->TOP;
        while (temp >= 0)
        {
            printf("The Current Value index %d is %d\n", temp, stack->data[temp]);
            temp--;
        }
    }
    else
    {
        printf("The Stack is empty!\n");
    }
}