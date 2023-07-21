#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, i;
    struct node *head = NULL, *tail = NULL, *new_node = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Creating the linked list
    for(i=0; i<n; i++) {
        new_node = (struct node*) malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if(head == NULL) {
            head = tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }

    // Handling edge cases
    if(head == NULL) {
        printf("List is empty\n");
        return 0;
    }

    if(head == tail) {
        printf("List has only one element\n");
        return 0;
    }

    // Moving the last element to the front
    tail->next = head;
    head = tail;
    tail = tail->next;

    while(tail->next != head) {
        tail = tail->next;
    }
    tail->next = NULL;

    // Printing the linked list
    printf("Linked List after moving the last element to front: ");
    struct node *current = head;
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
