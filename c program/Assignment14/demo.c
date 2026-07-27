#include <stdio.h>

#define MAX 10
int i;
// Structure for Priority Queue
struct PriorityQueue
{
    int data;
    int priority;
};

// Global Variables
struct PriorityQueue pq[MAX];
int rear = -1;

// Insert Operation
void insert()
{
    if (rear == MAX - 1)
    {
        printf("\nPriority Queue is Full.\n");
        return;
    }

    rear++;

    printf("Enter Data: ");
    scanf("%d", &pq[rear].data);

    printf("Enter Priority: ");
    scanf("%d", &pq[rear].priority);

    printf("Element Inserted Successfully.\n");
}

// Delete Operation (Minimum Priority)
void deleteElement()
{
    if (rear == -1)
    {
        printf("\nPriority Queue is Empty.\n");
        return;
    }

    int min = 0;

    // Find minimum priority
    for ( i = 1; i <= rear; i++)
    {
        if (pq[i].priority < pq[min].priority)
        {
            min = i;
        }
    }

    printf("\nDeleted Element = %d", pq[min].data);
    printf("\nPriority = %d\n", pq[min].priority);

    // Shift elements
    for ( i = min; i < rear; i++)
    {
        pq[i] = pq[i + 1];
    }

    rear--;
}

// Peek Operation
void peek()
{
    if (rear == -1)
    {
        printf("\nPriority Queue is Empty.\n");
        return;
    }

    int min = 0;

    for ( i = 1; i <= rear; i++)
    {
        if (pq[i].priority < pq[min].priority)
        {
            min = i;
        }
    }

    printf("\nTop Element = %d", pq[min].data);
    printf("\nPriority = %d\n", pq[min].priority);
}

// Display Operation
void display()
{
    if (rear == -1)
    {
        printf("\nPriority Queue is Empty.\n");
        return;
    }

    printf("\nData\tPriority\n");
    printf("-----------------\n");

    for ( i = 0; i <= rear; i++)
    {
        printf("%d\t%d\n", pq[i].data, pq[i].priority);
    }
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n===== MIN PRIORITY QUEUE =====\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            deleteElement();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("\nProgram Terminated.\n");
            break;

        default:
            printf("\nInvalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}
