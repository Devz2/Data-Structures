#include <iostream>

using namespace std;
typedef struct s
{
   char elem[100];
   int top;
}stack;
void push(stack *s, char item)
{
    if (s->top == 100)
       cout<<"stack full";
    else
      {
         s->top = s->top ;
         s->elem[s->top] = item;
       }
}
bool isempty(stack *s)
{
if (s->top == -1) return true;
}

char pop(stack *s)
{
    if (isempty(s))
       {
        cout<<"stack empty";
        return -1;
        }
    else
      {
         return s->elem[s->top--];
       }
}
// function to check if brackets are balanced
bool areBracketsBalanced(string expr)
{
    char x;
    stack s;
    s.top = -1;
    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')
        {
            // Push the element in the stack
            push(&s,expr[i]);
        }
        // IF current current character is not opening
        // bracket, then it must be closing. So stack
        // cannot be empty at this point.
        if (isempty(&s))
            return false;
        switch (expr[i]) {
        case ')':
            // Store the top element in a
            x = pop(&s);
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            // Store the top element in b
            x = pop(&s);
            if (x == '(' || x =='[')
                return false;
            break;

        case ']':
            // Store the top element in c
            x = pop(&s);
            if (x=='(' ||x=='{')
                return false;
            break;
        }
    }
    // Check Empty Stack
    return (isempty(&s));
}

// Driver code
int main()
{
    string expr = "{a+b}*(c^b}";
    // Function call
    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
