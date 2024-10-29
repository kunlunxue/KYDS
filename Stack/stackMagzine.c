#include <stdio.h>
#include "stack.h"

int Initialize(Stack *stack)
{
    stack->TOP = -1;
}
/// @brief Judge whether the stack is empty
/// @param stack
/// @return
int IsEmpty(Stack *stack)
{
    return stack->TOP == -1;
}
/// @brief judge whether the statck is full
/// @param stack
/// @return
int IsFull(Stack *stack)
{
    return stack->TOP == (MAX_SIZE - 1);
}
/// @brief Push new node to the stack
/// @param stack
/// @param data
/// @return
int Push(Stack *stack, int data)
{
    if (!IsFull(stack))
    {
        for (int i = (stack->TOP + 1); i > 0; i--)
        {
            stack->data[i] = stack->data[i - 1];
        }
        stack->data[0] = data;
        stack->TOP++;
    }
    else
    {
        return -1;
    }
}
/// @brief pop out the node from stack
/// @param stack
/// @return
int Pop(Stack *stack)
{
    if (!IsEmpty(stack))
    {
        int data = stack->data[0];
        for (int i = 1; i <= stack->TOP; i++)
        {
            stack->data[i - 1] = stack->data[i];
        }
        stack->TOP--;
        printf("the data has been poped%d", data);
        return data;
    }
    else
    {
        printf("The stack is empty now!");
        return -1;
    }
}
/// @brief access the top of the stack
/// @param stack
/// @return
int Peek(Stack *stack)
{
    if (IsEmpty(stack))
    {
        printf("The stack is empty!\n");
    }
    else
    {
        printf("The top of the stack is %d", stack->data[0]);
        return stack->data[0];
    }
}
/// @brief traverse the stack
/// @param stack  the stack
void Traverse(Stack *stack)
{
    if (!IsEmpty(stack))
    {
        for (int i = 0; i <= stack->TOP; i++)
        {
            printf("The current value is %d", stack->data[i]);
        }
    }
}
