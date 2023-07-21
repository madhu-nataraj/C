#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void init(Stack* stack) {
    stack->top = -1;
}

void push(Stack* stack, int item) {
    if (stack->top >= MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack->data[++stack->top] = item;
}

int pop(Stack* stack) {
    if (stack->top < 0) {
        printf("Error: Stack underflow\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int peek(Stack* stack) {
    if (stack->top < 0) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack->data[stack->top];
}

int isEmpty(Stack* stack) {
    return stack->top < 0;
}

int isFull(Stack* stack) {
    return stack->top >= MAX_SIZE - 1;
}

int main() {
    Stack stack;
    init(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("%d\n", pop(&stack)); // 3
    printf("%d\n", peek(&stack)); // 2

    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n"); // 2 1

    return 0;
}
