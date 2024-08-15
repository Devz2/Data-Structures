#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id,sal;
};

class Stack {
    public:
    Employee emps[100];
    int top;
    Stack() : top(-1) {}

    void push(Employee emp) {
        if (top >= 99) {
            cout << "Stack Overflow\n";
            return;
        }
        emps[++top] = emp;
    }

    void pop() {
        if (top < 0) {
           cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void print() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << "\nName: " << emps[i].name << " id: " << emps[i].id << " sal: " << emps[i].sal << "\n";
        }
    }

    void peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "\nTop of the stack - Name: " << emps[top].name << " ID: " << emps[top].id << " sal: " << emps[top].sal << "\n";
    }
};

int main() {
    Stack emp;

    Employee emp1 = {"Devan", 11, 50000.0};
    Employee emp2 = {"Babu", 12, 60000.0};
    Employee emp3 = {"Sachin", 13, 70000.0};
    Employee emp4 = {"ragul", 14, 80000.0};

    emp.push(emp1);
    emp.push(emp2);
    emp.push(emp3);
    emp.push(emp4);

    cout << "printing stack:";
    emp.print();

    cout << "\nPeek at stack:";
    emp.peek();

    emp.pop();
    cout << "\nAfter poping:";
    emp.print();

    return 0;
}
