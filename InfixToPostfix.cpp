#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;
char stack[MAX];
int top = -1;
 

void push(char c) {
    if (top >= MAX - 1)
        cout << "Stack Overflow!" << endl;
    else
        stack[++top] = c;
}

char pop() {
    if (top < 0) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}


char peek() {
    return (top >= 0) ? stack[top] : '\0';
}
 

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}


bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}


string infixToPostfix(const string& infix) {
    string postfix = "";
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (peek() != '(' && top != -1)
                postfix += pop();
            pop(); // Remove '(' from stack
        } else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c))
                postfix += pop();
            push(c);
        }
    }

    while (top != -1)
        postfix += pop();

    return postfix;
}


int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}