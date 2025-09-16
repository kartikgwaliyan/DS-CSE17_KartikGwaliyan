#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctype.h>

using namespace std;

int stack[100];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int main() {
    char expr[100];
    cout << "Enter postfix expression (space-separated): ";
    cin.getline(expr, 100);
    int i=0;


    while (expr[i] != '\0') {
        if (isdigit(expr[i])) {
            push((expr[i])-48);
        }
        else if(expr[i]==' '){
            i++;
            continue;
        }
        else {
            int b = pop();
            int a = pop();
            switch (expr[i]) {
                case '+': push(a + b);
                    break;
                case '-': push(a - b); 
                    break;
                case '*': push(a * b); 
                    break;
                case '/': push(a / b); 
                    break;
            }
        }
        i++;
    }

    cout << "Result: " << pop() << endl;
    return 0;
}