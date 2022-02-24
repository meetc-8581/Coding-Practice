#include <iostream>
#include <stack>
#define n 20

using namespace std;

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int val)
//     {
//         if (top == n - 1)
//         {
//             cout << "Stack Overflow" << endl;
//             return;
//         }
//         top++;
//         arr[top] = val;
//     }
// };

class queuest
{
    stack<int> s1;

public:
    void push(int val)
    {
        s1.push(val);
    }
    int popRec()
    {
        if (s1.empty())
        {
            cout << "queue empty" << endl;
            return -1;
        }
        int val = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return val;
        }
        int popedval = popRec();
        push(val);
        return popedval;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queuest q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.popRec() << endl;
    q.push(5);
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    q.push(7);
    q.push(8);
    q.push(9);
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    cout << q.popRec() << endl;
    return 0;
}