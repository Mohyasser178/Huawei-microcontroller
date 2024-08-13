#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void addNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice;
    int value;

    while (1) {
        printf("Enter 0 to add a node, 1 to print the list, 2 to exit: ");
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Enter the value to add: ");
            scanf("%d", &value);
            addNode(&head, value);
        } else if (choice == 1) {
            printf("Current Linked List: ");
            printList(head);
        } else if (choice == 2) {
            printf("Exiting the program...\n");
            break;
        } else {
            printf("Incorrect entry. Please try again.\n");
        }
    }

    return 0;
}
