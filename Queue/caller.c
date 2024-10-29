#include <stdio.h>
#include "queue.h"

int main()
{
    Queue *theQueue;
    InitQueue(theQueue);
    EnQueue(theQueue, 1);
    EnQueue(theQueue, 2);
    EnQueue(theQueue, 3);
    DisplayQueue(theQueue);
    DeQueue(theQueue);
    DisplayQueue(theQueue);
}