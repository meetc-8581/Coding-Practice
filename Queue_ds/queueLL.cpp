#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queuell
{
    node *f; // front
    node *b; // back

public:
    queuell()
    {
        // node *n = new node(val);
        f = NULL;
        b = NULL;
    }

    void enqueue(int val)
    {
        node *n = new node(val);
        if (f == NULL)
        {
            f = n;
            b = n;
            return;
        }
        b->next = n;
        b = n;
        return;
    }
    void dequeue()
    {
        if (f == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        node *ele = f;
        f = f->next;

        delete ele;
    }
    int peek()
    {
        if (f == NULL)
        {
            cout << "Queue empty" << endl;
            return -1;
        }
        return f->data;
    }
    bool empty()
    {
        if (f == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queuell q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << q.peek() << endl;

    return 0;
}