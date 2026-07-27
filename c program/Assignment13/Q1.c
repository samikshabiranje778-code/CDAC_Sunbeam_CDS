#include <stdio.h>  //    Desending stack
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = SIZE;
int i;

// Function declarations
void push(int element);
void pop();
void peek();
void display();

int main() {
    int choice, element;

     {while (1)
        printf("\n*** DESCENDING STACK MENU ***\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// 1. Push Operation: Decrement top and insert element
void push(int element) {
    if (top == 0) {
        printf("Stack Overflow! Cannot push %d.\n", element);
    } else {
        top--;  //top=5 that is invalid so top-1=4  
        stack[top] = element; //stack[4]=10
        printf("%d pushed onto the stack.\n", element);//10
    }
}

// 2. Pop Operation: Delete top element and increment top
void pop() {
    if (top == SIZE) {
        printf("Stack Underflow! No elements to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top++;
    }
}

// 3. Peek Operation: Display the top element
void peek() {
    if (top == SIZE) {
        printf("Stack is empty! No top element.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

// 4. Display Operation:
void display() {
    if (top == SIZE) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for ( i = top; i < SIZE; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
