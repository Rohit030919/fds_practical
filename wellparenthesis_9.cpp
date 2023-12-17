#include <iostream>
using namespace std;
#define size 10

class stackexp {
    int top;
    char stk[size];

public:
    stackexp() : top(-1) {}
    void push(char x) { stk[++top] = x; }
    char pop() { return stk[top--]; }
    int isfull() { return (top == size - 1); }
    int isempty() { return (top == -1); }
};

int main() {
    stackexp s1;
    char exp[20], ch;
    int i = 0;
    cout << "Enter the expression to check whether it is well parenthesis or not: ";
    cin >> exp;

    while (exp[i] != '\0') {
        ch = exp[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            s1.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (s1.isempty()) {
                cout << "\nInvalid Expression or not well-parenthesized.\n";
                return 0;
            } else {
                char popped = s1.pop();
                if ((ch == ')' && popped != '(') ||
                    (ch == ']' && popped != '[') ||
                    (ch == '}' && popped != '{')) {
                    cout << "\nInvalid Expression or not well-parenthesized.\n";
                    return 0;
                }
            }
        }
        i++;
    }

    if (s1.isempty()) {
        cout << "\nExpression is well-parenthesized.\n";
    } else {
        cout << "\nInvalid Expression or not well-parenthesized.\n";
    }
    return 0;
}

