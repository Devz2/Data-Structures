#include <iostream>
#include <stack>
#include <string>
using namespace std;
int longestValidParentheses(string s)
{
    int n = s.length();
    stack<int> st;
    int maxLen = 0;
    int i=0;

    st.push(-1);

    for(i=0;i<n;i++)
        {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else
            {
            st.pop();
            if (!st.empty())
             {
                maxLen = max(maxLen, i-st.top());
             }
             else
                {
                st.push(i);
             }
             }

       }

    return maxLen;
}

int main()
 {
    string s;
    cout<<"enter the paranthesis:"<<endl;
    cin>>s;
    cout << longestValidParentheses(s) << endl;
    return 0;
}

