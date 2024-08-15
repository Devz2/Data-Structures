#include <iostream>
#include <stack>
using namespace std;

int evaluatePrefix(string exp)
{
    stack<int> st; // creating a stack for storing the integers and evaluate them

        for (int i = 0; i < exp.size(); ++i) {
        if (isdigit(exp[i])) // if it's digit then store it in the stack
            st.push(exp[i] - '0');

        else { // the element isnt a digit, then pop two element out from the stack, evalute them and push in stack again
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (exp[i]) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top(); // return the last element in the stack (it will be the evaluted answer of the prefix expression)
}
int main(){
string a="45^7*";
cout<<evaluatePrefix(a);
return 0;
}