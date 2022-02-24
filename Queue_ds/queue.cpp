#include <iostream>
#define n 20
using namespace std;

class queue
{
    int *arr;
    int f; // front
    int b; // back

public:
    queue()
    {
        arr = new int[n];
        f = -1;
        b = -1;
    }

    void enqueue(int val)
    {
        if (b == n - 1)
        {
            cout << "Queue overflow" << endl;
        }

        b++;
        arr[b] = val;
        if (f == -1)
        {
            f++;
        }
    }

    int dequeue()
    {
        if (f == -1 || f > b)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int val = arr[f];
        f++;
        return val;
    }
    int peek()
    {
        if (f == -1 || f > b)
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        if (f == -1 || f > b)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    cout << q.empty() << endl;
    cout << q.dequeue() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.empty() << endl;

    return 0;
}