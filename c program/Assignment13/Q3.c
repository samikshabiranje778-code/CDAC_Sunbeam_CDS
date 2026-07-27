#include <stdio.h>

#define SIZE 5     //Circular Queue

int queue[SIZE];
int front = -1, rear = -1;

// Insert Operation
void insert()
{
    int data;

    // Check Queue Overflow
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &data);

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;  //size=5,f=2,r=1//2%5=2
    }

    queue[rear] = data;// queue[2]
    printf("Element inserted successfully.\n");
}

// Delete Operation
void deleteElement()
{
    if (front == -1)
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("Deleted = %d\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

// Peek Operation
void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("Front Element = %d\n", queue[front]);
    }
}

// Display Operation
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue Elements: ");

    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    else
    {
        for (i = front; i < SIZE; i++)
        {
            printf("%d ", queue[i]);
        }

        for (i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }

    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n----- Circular Queue Menu -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
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
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}
