#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int data)
{
    cout << "callaed" << endl;
    if (st.empty())
    {
        st.push(data);
        return;
    }
    int topel = st.top();
    st.pop();
    insertAtBottom(st, data);
    st.push(topel);
    return;
}

void reverseS(stack<int> &st)
{
    if (!st.empty())
    {
        int data = st.top();
        st.pop();
        reverseS(st);
        insertAtBottom(st, data);
    }
    return;
}

int main()
{
    stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // insertAtBottom(st, 10);

    reverseS(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}