#include <stdio.h>
#include <stdlib.h>

// Structure
struct node
{
    int data;
    struct node *next;
};

// Initialize Linked List
void initList(struct node **head)
{
    *head = NULL;
}

// Create New Node
struct node *createNode(int ele)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = ele;
    newNode->next = NULL;

    return newNode;
}

// Count Nodes
int count(struct node *head)
{
    int cnt = 0;

    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }

    return cnt;
}

// Add First
void addFirst(struct node **head, int ele)
{
    struct node *newNode = createNode(ele);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;
    }
}

// Add Last
void addLast(struct node **head, int ele)
{
    struct node *newNode = createNode(ele);

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct node *trav = *head;

        while (trav->next != NULL)
        {
            trav = trav->next;
        }

        trav->next = newNode;
    }
}

// Add At Position
void addPosition(struct node **head, int pos, int ele)
{
    int i;

    if (pos < 1 || pos > count(*head) + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        addFirst(head, ele);
        return;
    }

    if (pos == count(*head) + 1)
    {
        addLast(head, ele);
        return;
    }

    struct node *newNode = createNode(ele);
    struct node *trav = *head;

    for (i = 1; i < pos - 1; i++)
    {
        trav = trav->next;
    }

    newNode->next = trav->next;
    trav->next = newNode;
}

// Delete First
void deleteFirst(struct node **head)
{
    if (*head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    struct node *temp = *head;

    *head = (*head)->next;

    free(temp);
}

// Delete Last
void deleteLast(struct node **head)
{
    if (*head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    struct node *trav = *head;

    while (trav->next->next != NULL)
    {
        trav = trav->next;
    }

    free(trav->next);
    trav->next = NULL;
}

// Delete At Position
void deletePosition(struct node **head, int pos)
{
    int i;

    if (pos < 1 || pos > count(*head))
    {
        printf("Invalid Position\n");
        return;
    }

    if (pos == 1)
    {
        deleteFirst(head);
        return;
    }

    if (pos == count(*head))
    {
        deleteLast(head);
        return;
    }

    struct node *trav = *head;

    for (i = 1; i < pos - 1; i++)
    {
        trav = trav->next;
    }

    struct node *temp = trav->next;

    trav->next = temp->next;

    free(temp);
}

// Display
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    printf("\nLinked List : ");

    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

// Main Function
int main()
{
    struct node *head;

    initList(&head);

    int choice, ele, pos;

    do
    {
        printf("\n==============================");
        printf("\n1. Add First");
        printf("\n2. Add Last");
        printf("\n3. Add Position");
        printf("\n4. Delete First");
        printf("\n5. Delete Last");
        printf("\n6. Delete Position");
        printf("\n7. Display");
        printf("\n8. Count");
        printf("\n0. Exit");

        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element : ");
            scanf("%d", &ele);
            addFirst(&head, ele);
            break;

        case 2:
            printf("Enter Element : ");
            scanf("%d", &ele);
            addLast(&head, ele);
            break;

        case 3:
            printf("Enter Position : ");
            scanf("%d", &pos);

            printf("Enter Element : ");
            scanf("%d", &ele);

            addPosition(&head, pos, ele);
            break;

        case 4:
            deleteFirst(&head);
            break;

        case 5:
            deleteLast(&head);
            break;

        case 6:
            printf("Enter Position : ");
            scanf("%d", &pos);

            deletePosition(&head, pos);
            break;

        case 7:
            display(head);
            break;

        case 8:
            printf("Total Nodes = %d\n", count(head));
            break;

        case 0:
            printf("Program Ended\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 0);

    return 0;
}
