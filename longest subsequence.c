#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n;
    scanf("%d", &n);
    struct node *newnode, *head = NULL, *temp = NULL;
    int i, j, max_diff = -1;
    for (i = 0; i < n; i++) {
        newnode = (struct node*) malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    for (temp = head; temp != NULL; temp = temp->next) {
        for (struct node *p = temp->next; p != NULL; p = p->next) {
            int diff = abs(temp->data - p->data);
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
    }
    printf("%d", max_diff);
    return 0;
}
