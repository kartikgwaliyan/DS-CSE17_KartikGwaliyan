#include <iostream>
using namespace std;

int main() {
    char expr[100];
    char stack[100];
    int top = -1;

    cout << "Enter parentheses string: ";
    cin >> expr;

    for (int i = 0; expr[i] != '\0'; i++) {
        char ch = expr[i];

        
        if (ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch;
        }
        
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                cout << "Invalid parentheses\n";
                return 0;
            }
            char open = stack[top];
            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                cout << "Invalid parentheses\n";
                return 0;
            }
            top--;
        }
    }

    if (top == -1)
        cout << "Valid parentheses\n";
    else
        cout << "Invalid parentheses\n";

    return 0;
}