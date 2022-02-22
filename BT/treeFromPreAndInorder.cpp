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

Node *treeFromPreandInorder(int pre[], int in[], int index, int start, int end, int n)
{
    if (index == n)
    {
        return NULL;
    }

    struct Node *root = new Node(pre[i]);

    int j = start;
    while (j < end)
    {
        if (in[j] == pre[i])
        {
            break;
        }
        j++;
    }
    root->left = treeFromPreandInorder(pre, in + 1, l, j - 1, n);
    root->right = treeFromPreandInorder(pre, in + 1, j + 1, r, n);
    return root;
}
void preorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int pre[7] = {1, 2, 4, 5, 3, 6, 7};
    int in[7] = {4, 2, 5, 1, 6, 3, 7};
    struct Node *root = treeFromPreandInorder(pre, in, 0, 7, 7);

    cout << "Preorder" << endl;
    preorder(root);

    return 0;
}