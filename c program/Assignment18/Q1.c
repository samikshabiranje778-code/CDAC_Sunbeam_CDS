#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the Doubly Linear Linked List
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Structure to manage the head and tail pointers of the list
typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
} DoublyLinkedList;

// Function declarations
void initList(DoublyLinkedList* list);
Node* createNode(int data);
void addFirst(DoublyLinkedList* list, int data);
void addLast(DoublyLinkedList* list, int data);
void displayForward(DoublyLinkedList* list);
void displayBackward(DoublyLinkedList* list);
void deleteFirst(DoublyLinkedList* list);
void deleteLast(DoublyLinkedList* list);
int getCount(DoublyLinkedList* list);
void addPosition(DoublyLinkedList* list, int data, int pos);
void deletePosition(DoublyLinkedList* list, int pos);
void freeList(DoublyLinkedList* list);

int main() {
    DoublyLinkedList list;
    initList(&list);
    
    int choice, data, pos;
    
    while(1) {
        printf("\n--- Doubly Linear Linked List Menu ---\n");
        printf("1. Add First\n");
        printf("2. Add Last\n");
        printf("3. Display Forward\n");
        printf("4. Display Backward\n");
        printf("5. Delete First\n");
        printf("6. Delete Last\n");
        printf("7. Add at Position\n");
        printf("8. Delete from Position\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter data to add at first: ");
                scanf("%d", &data);
                addFirst(&list, data);
                break;
            case 2:
                printf("Enter data to add at last: ");
                scanf("%d", &data);
                addLast(&list, data);
                break;
            case 3:
                displayForward(&list);
                break;
            case 4:
                displayBackward(&list);
                break;
            case 5:
                deleteFirst(&list);
                break;
            case 6:
                deleteLast(&list);
                break;
            case 7:
                printf("Enter position: ");
                scanf("%d", &pos);
                printf("Enter data: ");
                scanf("%d", &data);
                addPosition(&list, data, pos);
                break;
            case 8:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                deletePosition(&list, pos);
                break;
            case 9:
                freeList(&list);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Initialize the list pointers to NULL
void initList(DoublyLinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
}

// Helper function to allocate memory for a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Add a node at the beginning of the list
void addFirst(DoublyLinkedList* list, int data) {
    Node* newNode = createNode(data);
    
    if (list->head == NULL) { // Empty list case
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->next = list->head;
        list->head->prev = newNode;
        list->head = newNode;
    }
    printf("Inserted %d at first.\n", data);
}

// Add a node at the end of the list
void addLast(DoublyLinkedList* list, int data) {
    Node* newNode = createNode(data);
    
    if (list->head == NULL) { // Empty list case
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
    printf("Inserted %d at last.\n", data);
}

// Traverse and print list elements from head to tail
void displayForward(DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    Node* temp = list->head;
    printf("Forward List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Traverse and print list elements from tail to head
void displayBackward(DoublyLinkedList* list) {
    if (list->tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    Node* temp = list->tail;
    printf("Backward List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

// Delete the first node of the list
void deleteFirst(DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    Node* temp = list->head;
    
    if (list->head == list->tail) { // Only one node in the list
        list->head = NULL;
        list->tail = NULL;
    } else {
        list->head = list->head->next;
        list->head->prev = NULL;
    }
    
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Delete the last node of the list
void deleteLast(DoublyLinkedList* list) {
    if (list->tail == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    Node* temp = list->tail;
    
    if (list->head == list->tail) { // Only one node in the list
        list->head = NULL;
        list->tail = NULL;
    } else {
        list->tail = list->tail->prev;
        list->tail->next = NULL;
    }
    
    printf("Deleted node with data: %d\n", temp->data);
    free(temp);
}

// Helper function to return total node count
int getCount(DoublyLinkedList* list) {
    int count = 0;
    Node* temp = list->head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Add a node at a specified positional index
void addPosition(DoublyLinkedList* list, int data, int pos) {
    int count = getCount(list);
    
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position! Current valid range is 1 to %d\n", count + 1);
        return;
    }
    
    if (pos == 1) {
        addFirst(list, data);
        return;
    }
    
    if (pos == count + 1) {
        addLast(list, data);
        return;
    }
    
    // Traverse to node just before target position
    Node* temp = list->head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    
    temp->next->prev = newNode;
    temp->next = newNode;
    
    printf("Inserted %d at position %d.\n", data, pos);
}

// Delete a node from a specified positional index
void deletePosition(DoublyLinkedList* list, int pos) {
    int count = getCount(list);
    
    if (list->head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    if (pos < 1 || pos > count) {
        printf("Invalid position! Current valid range is 1 to %d\n", count);
        return;
    }
    
    if (pos == 1) {
        deleteFirst(list);
        return;
    }
    
    if (pos == count) {
        deleteLast(list);
        return;
    }
    
    // Traverse to target node
    Node* temp = list->head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }
    
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    
    printf("Deleted node with data: %d from position %d\n", temp->data, pos);
    free(temp);
}

// Clean up memory before exit
void freeList(DoublyLinkedList* list) {
    Node* temp = list->head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    list->head = NULL;
    list->tail = NULL;
}
