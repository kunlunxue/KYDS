#include <stdio.h>
#include <stdlib.h>

// Defining the structure of node and the node could be anything that representing class just like in C# and any other  OO languages
struct Node
{
    int data;
    struct Node *next;
};

// Creating new node
struct Node *createNode(int data)
{
    // Malloc the nessary memory acording to the size of the Node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end of the link list
void insertNode(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;

        // using while loop to find the last node of the linked list
        // the last node has a character that its next propert is NULL
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Looping through the linked list
void loopList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        // the aim of looping throug a list is to modify, read,search the element
        printf("%d -> ", temp->data);
        temp = temp->next;
        }
    printf("NULL\n");
}

void demontrateAddress()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // Caculate the total size of the array,
    // Then, divide it by a unit size of the array, you got the count of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // looping through the array by for looping
    for (int i = 0; i < size; i++)
    {
        printf("Address %p\n", &arr[i]);
    }
}

int main()
{

    // int theDight = 191745745645645645;
    // struct Node *newNode = createNode(198);

    // printf("The address of theDigit is %p\n", (void *)newNode);
    // demontrateAddress();

    // Create a NULL node
    struct Node *head = NULL;
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    loopList(head);
    return 0;
}