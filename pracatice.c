#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the linked list
void appendNode(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    struct Node *last = *head;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
}

// Function to generate a .dot file to visualize the linked list
void generateDotFile(struct Node *head, const char *filename)
{
    FILE *file = fopen(filename, "w");
    if (!file)
    {
        printf("Error opening file\n");
        return;
    }
    fprintf(file, "digraph LinkedList {\n");
    fprintf(file, "    node [shape=record];\n");

    struct Node *current = head;
    while (current != NULL)
    {
        fprintf(file, "    node%d [label=\"{%d}\"];\n", current->data, current->data);
        if (current->next != NULL)
        {
            fprintf(file, "    node%d -> node%d;\n", current->data, current->next->data);
        }
        current = current->next;
    }

    fprintf(file, "}\n");
    fclose(file);
}

int main()
{
    struct Node *head = NULL;

    // Create a linked list: 1 -> 2 -> 3 -> 4
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);
    appendNode(&head, 4);

    // Generate the .dot file to visualize the linked list
    generateDotFile(head, "linked_list.dot");

    printf("Linked list visualized in linked_list.dot\n");

    return 0;
}
