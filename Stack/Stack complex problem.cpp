#include <iostream>
#include <string>
#include <stack>
using namespace std;
string changing(const string& s) {
    stack<int> countStack;
    stack<string> strings;
    string current;
    int currentCount = 0;

    for (char c : s) {
        if (isdigit(c)) {
            currentCount=currentCount*10+(c-'0');
        } else if(c=='[') {
            countStack.push(currentCount);
            strings.push(current);
            current.clear();
            currentCount=0;
        } else if(c == ']') {
            string previousString=strings.top();
            strings.pop();
            int repeatCount=countStack.top();
            countStack.pop();

            string newString;
            for(int i=0;i<repeatCount;i++) {
                newString+=current;
            }
            current=previousString+newString;
        } else{
            current+=c;
        }
    }

    return current;
}

int main() {
    string s="3[a]5[bcd]";
    string result=changing(s);
    cout<<"Output: "<<result<<endl;
    return 0;
}
