#include <stdio.h>  //linear Queue

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert()
{
    int data;

    if (rear == SIZE - 1)//Checks if the queue is full
    {
	
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter element: ");
    scanf("%d", &data);

    if (front == -1)
        front = 0;   //If the queue is empty (front == -1), sets front = 0.

    rear++;  //increment rear  rear=0 //10
    queue[rear] = data;  ///queue[0]=10;

    printf("Element inserted successfully.\n");
}

void deleteElement()
{
    if (front == -1)
    {
        printf("Queue Underflow!\n");//empty
        return;
    }

    printf("Deleted = %d\n", queue[front]);//queue[0]=10
    front++;  //front=1

    if (front > rear)    //If front > rear, the queue becomes empty again:
    {
        front = rear = -1;
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        printf("Front Element = %d\n", queue[front]);//Queue[0]=10
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is Empty!\n");
        return;
    }

    printf("Queue Elements: ");
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n----- Linear Queue Menu -----\n");
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
