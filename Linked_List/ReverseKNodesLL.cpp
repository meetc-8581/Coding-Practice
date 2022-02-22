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

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

    return;
}

node *reverseKNodes(node *head, int k)
{

    node *prev = NULL;
    node *curr = head;
    node *next;
    int i = 0;
    while (i < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }
    if (next != NULL)
    {
        head->next = reverseKNodes(next, k);
    }
    return prev;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "   " << endl;
}

int main()
{

    node *head = new node(0);

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    // insertAtTail(head, 6);

    display(head);

    node *newhead = reverseKNodes(head, 3);

    display(newhead);

    return 0;
}