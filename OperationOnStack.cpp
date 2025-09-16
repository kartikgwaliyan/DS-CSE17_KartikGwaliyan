#include <iostream>
using namespace std;

const int MAX = 100;
int top = -1;

void push(int stack[], int size, int value) {
    if (top >= size - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed to stack" << endl;
    }
}

void pop(int stack[]) {
    if (top < 0) {
        cout << "Stack Underflow! Nothing to pop" << endl;
    } else {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
}

void display(int stack[]) {
    if (top < 0) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack contents:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << "| " << stack[i] << " |" << endl;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the stack (max 100): ";
    cin >> size;

    if (size <= 0 || size > MAX) {
        cout << "Invalid size. Please enter a value between 1 and 100." << endl;
        return 1;
    }

    int stack[MAX];

    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(stack, size, value);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

    return 0;
}