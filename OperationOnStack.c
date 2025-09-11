#include <stdio.h>

int top = -1;

// Push function
void push(int stack[], int size, int value) {
    if (top >= size - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Pop function
void pop(int stack[]) {
    if (top < 0) {
        printf("Stack Underflow! Nothing to pop\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Display function
void display(int stack[]) {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents:\n");
        for (int i = top; i >= 0; i--) {
            printf("| %d |\n", stack[i]);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the stack (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid size. Please enter a value between 1 and 100.\n");
        return 1;
    }

    int stack[100]; // Fixed-size array, but we use only up to 'size'

    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(stack, size, value);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}