#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack *stack;
    int option, data;
    Initialize(stack);
    while (1)
    {
        printf("1.Push.\n ");
        printf("2.Pop.\n");
        printf("3.Peek the stack.\n");
        printf("4.Traverse the stack.\n");
        printf("5.To quit.\n");
        printf("Please input the option you want.\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1 /* constant-expression */:
            /* code */

            printf("Please enter the value you want to push");
            scanf("%d", &data);

            Push(stack, data);

            break;
        case 2:
            Pop(stack);
            break;
        case 3:
            Peek(stack);
            break;
        case 4:
            Traverse(stack);
            break;
        case 5:
            exit(1);
            break;
        default:
            break;
        }
    }
}