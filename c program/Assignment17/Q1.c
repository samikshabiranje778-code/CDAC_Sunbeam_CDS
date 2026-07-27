#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *First = NULL;

// Count nodes
int Count()
{
    if (First == NULL)
        return 0;

    int cnt = 0;
    struct Node *temp = First;

    do
    {
        cnt++;
        temp = temp->next;
    } while (temp != First);

    return cnt;
}

// Display list
void Display()
{
    if (First == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct Node *temp = First;

    printf("List : ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != First);

    printf("\n");
}

// Add First
void AddFirst(int value)
{
    struct Node *newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = value;

    if (First == NULL)
    {
        newn->next = newn;
        First = newn;
    }
    else
    {
        struct Node *temp = First;

        while (temp->next != First)
            temp = temp->next;

        newn->next = First;
        temp->next = newn;
        First = newn;
    }
}

// Add Last
void AddLast(int value)
{
    struct Node *newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = value;

    if (First == NULL)
    {
        newn->next = newn;
        First = newn;
    }
    else
    {
        struct Node *temp = First;

        while (temp->next != First)
            temp = temp->next;

        temp->next = newn;
        newn->next = First;
    }
}

// Delete First
void DeleteFirst()
{
    if (First == NULL)
    {
        printf("List is Empty\n");
    }
    else if (First->next == First)
    {
        free(First);
        First = NULL;
    }
    else
    {
        struct Node *temp = First;

        while (temp->next != First)
            temp = temp->next;

        struct Node *target = First;
        First = First->next;
        temp->next = First;

        free(target);
    }
}

// Delete Last
void DeleteLast()
{
    if (First == NULL)
    {
        printf("List is Empty\n");
    }
    else if (First->next == First)
    {
        free(First);
        First = NULL;
    }
    else
    {
        struct Node *temp = First;

        while (temp->next->next != First)
            temp = temp->next;

        free(temp->next);
        temp->next = First;
    }
}

// Add at Position
void AddPosition(int pos, int value)
{
    int size = Count();

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        AddFirst(value);
    }
    else if (pos == size + 1)
    {
        AddLast(value);
    }
    else
    {
        struct Node *newn = (struct Node *)malloc(sizeof(struct Node));
        newn->data = value;

        struct Node *temp = First;

        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        newn->next = temp->next;
        temp->next = newn;
    }
}

// Delete at Position
void DeletePosition(int pos)
{
    int size = Count();

    if (pos < 1 || pos > size)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == size)
    {
        DeleteLast();
    }
    else
    {
        struct Node *temp = First;

        for (int i = 1; i < pos - 1; i++)
            temp = temp->next;

        struct Node *target = temp->next;
        temp->next = target->next;

        free(target);
    }
}

int main()
{
    int choice, value, pos;

    do
    {
        printf("\n=============================\n");
        printf("Circular Singly Linked List\n");
        printf("=============================\n");
        printf("1. Add First\n");
        printf("2. Add Last\n");
        printf("3. Display\n");
        printf("4. Delete First\n");
        printf("5. Delete Last\n");
        printf("6. Add Position\n");
        printf("7. Delete Position\n");
        printf("8. Count\n");
        printf("0. Exit\n");
        printf("=============================\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &value);
            AddFirst(value);
            break;

        case 2:
            printf("Enter Value : ");
            scanf("%d", &value);
            AddLast(value);
            break;

        case 3:
            Display();
            break;

        case 4:
            DeleteFirst();
            break;

        case 5:
            DeleteLast();
            break;

        case 6:
            printf("Enter Position : ");
            scanf("%d", &pos);

            printf("Enter Value : ");
            scanf("%d", &value);

            AddPosition(pos, value);
            break;

        case 7:
            printf("Enter Position : ");
            scanf("%d", &pos);

            DeletePosition(pos);
            break;

        case 8:
            printf("Count = %d\n", Count());
            break;

        case 0:
            printf("Program Terminated\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 0);

    return 0;
}