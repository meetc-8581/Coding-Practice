#include <iostream>
#define n 10

using namespace std;

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int a)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = a;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;

    s.push(0);
    s.push(1);
    s.push(2);
    cout << s.Top() << endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.Top() << endl;

    return 0;
}