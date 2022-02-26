#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Node treeFromPreandinorder(int arr[])
{
}

int main()
{
    int arr[7] = {1, 2, 4, 5, 3, 6, 7};
    struct Node *root = treeFromPreorder(arr);

    return 0;
}