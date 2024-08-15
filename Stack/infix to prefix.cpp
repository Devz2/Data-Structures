#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) // we define a function for assigning the precedence of each operator
 {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/' || op == '%') {
        return 2;
    }
    return 0;
}

bool isOperator(char c) // returns true if the input is operator
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

string infixToPostfix(string infix) {
    stack<char> s; // stack for storing the operator from the expression
    string postfix = "";

    for (char& c : infix) {
        if (isalnum(c)) // if it's a alphabet or digit then it's added to the final postfix string defined eariler
{
            postfix += c;
        }
        else if (c == '(') // condition for handling the parentheses and mathematical rules in precedence
 {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (isOperator(c)) {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    cout << "Postfix expression: " << infixToPostfix(infix)<< endl;
    return 0;
}