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
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

    return;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void search(node *head, int k)
{

    node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            cout << i << endl;
            return;
        }
        i++;
        temp = temp->next;
    }
    cout << -1 << endl;
}

void delNthNode(node *&head, int n)
{

    if (n == 0)
    {
        head = head->next;
        return;
    }
    node *temp = head;
    int i = 0;
    while (temp->next != NULL)
    {
        if (i == n - 1)
        {
            node *temp2 = temp->next;
            temp->next = temp->next;
            return;
        }
        i++;
        temp = temp->next;
    }
    cout << "Index out of range" << endl;
}

void delByVal(node *head, int val)
{
    node *temp = head;

    while (temp->next->data == val)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 1);

    search(head, 3);
    display(head);

    delByVal(head, 3);

    display(head);

    delNthNode(head, 0);

    display(head);

    return 0;
}