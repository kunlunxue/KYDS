#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Initialize the queue
//  set the front as NULL
// set the rear as NULL
// set the size as 0
void InitQueue(Queue *queue)
{
    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
}

// Jude the queue is empty or not
int IsEmpty(Queue *queue)
{
    return queue->front == NULL;
}

void EnQueue(Queue *queue, int value)
{
    // First define a new node and allocate the
    // memory for it
    // You have memorize it, or else you can't do anthing
    struct QueueNode *newNode = (struct QueueNode *)malloc(sizeof(struct QueueNode));
    if (!newNode)
    {
        printf("Memory allocation error!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (queue->rear == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    queue->size++;
    printf("Enqueued:%d", value);
}

int DeQueue(Queue *queue)
{
    // Judge whether the queue is empty
    if (IsEmpty(queue))
    {
        printf("The is queue is empty!");
        return -1;
    }
    // Define the current front pointer
    struct QueueNode *temp = queue->front;
    int value = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }
    queue->size--;
    free(temp);
    printf("%d dequeued", value);
    return value;
}
void DisplayQueue(Queue *queue)
{
    struct QueueNode *tempNode;
    tempNode = queue->front;
    while (tempNode)
    {
        printf("The current data is: %d\n", tempNode->data);
        tempNode = tempNode->next;
    }
}

int Peek(Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("The queue is empty!");
        return -1;
    }
    return queue->front->data;
}
