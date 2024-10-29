#ifndef QUEUE_H
#define QUEUE_H

struct QueueNode
{
    int data;
    struct QueueNode *next;
};

typedef struct
{
    struct QueueNode *front;
    struct QueueNode *rear;
    int size;
} Queue;

// Function prototypes for queue operations
// Initialize the queuen
void InitQueue(Queue *queue);
// To judge whether the queque is emputy
int IsEmpty(Queue *queue);
// Enque the node
void EnQueue(Queue *queue, int value);
// DeQueue
int DeQueue(Queue *queue);
// Peek
int Peek(Queue *queue);
// Display the Queue
void DisplayQueue(Queue *queue);
// Free the Queue
void FreeQueue(Queue *queue);

#endif