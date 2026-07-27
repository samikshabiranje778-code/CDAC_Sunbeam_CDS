#include <stdio.h>

#define MAX 100

int arr[MAX], size = 0;

// Insert at Beginning
void insertBegin(int val)
{
    if (size == MAX)
    {
        printf("Array is Full!\n");
        return;
    }

    for (int i = size; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = val;
    size++;
}

// Insert at End
void insertEnd(int val)
{
    if (size == MAX)
    {
        printf("Array is Full!\n");
        return;
    }

    arr[size++] = val;
}

// Insert at Position
void insertPos(int pos, int val)
{
    if (size == MAX)
    {
        printf("Array is Full!\n");
        return;
    }

    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = size; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = val;
    size++;
}

// Delete from Beginning
void deleteBegin()
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;
}

// Delete from End
void deleteEnd()
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    size--;
}

// Delete from Position
void deletePos(int pos)
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    if (pos < 1 || pos > size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = pos - 1; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;
}

// Traverse Forward
void traverseForward()
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

// Traverse Backward
void traverseBackward()
{
    if (size == 0)
    {
        printf("Array is Empty!\n");
        return;
    }

    printf("Array: ");
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\n");
}

// Search
void search(int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return;
        }
    }

    printf("Element Not Found\n");
}

// Reverse
void reverse()
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Array Reversed Successfully.\n");
}

// Bubble Sort
void sort()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array Sorted Successfully.\n");
}

int main()
{
    int choice, val, pos;

    do
    {
        printf("\n------ ARRAY LIST MENU ------\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Traverse Forward\n");
        printf("8. Traverse Backward\n");
        printf("9. Search Element\n");
        printf("10. Reverse Array\n");
        printf("11. Sort Array\n");
        printf("0. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element: ");
            scanf("%d", &val);
            insertBegin(val);
            break;

        case 2:
            printf("Enter Element: ");
            scanf("%d", &val);
            insertEnd(val);
            break;

        case 3:
            printf("Enter Position: ");
            scanf("%d", &pos);
            printf("Enter Element: ");
            scanf("%d", &val);
            insertPos(pos, val);
            break;

        case 4:
            deleteBegin();
            break;

        case 5:
            deleteEnd();
            break;

        case 6:
            printf("Enter Position: ");
            scanf("%d", &pos);
            deletePos(pos);
            break;

        case 7:
            traverseForward();
            break;

        case 8:
            traverseBackward();
            break;

        case 9:
            printf("Enter Element to Search: ");
            scanf("%d", &val);
            search(val);
            break;

        case 10:
            reverse();
            break;

        case 11:
            sort();
            break;

        case 0:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 0);

    return 0;
}
