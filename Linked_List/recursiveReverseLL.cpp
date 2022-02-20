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

node *reverse(node *&head)
{
    cout << head->data << endl;
    if (head == NULL || head->next == NULL)
    {
        cout << "null encountred" << endl;
        return head;
    }
    node *newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

void display(node *head)
{
    node *temp = head;
    cout << "display" << endl;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    node *head = new node(0);

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    display(head);

    node *newhead = reverse(head);

    display(newhead);

    return 0;
}