#include <iostream>
#include <stack>

using namespace std;

string reverse(string s)
{
    string res;
    stack<string> st;

    int j = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || i == s.length())
        {
            st.push(s.substr(j, i - j));
            j = i + 1;
        }
    }

    while (!st.empty())
    {
        res.append(st.top());
        st.pop();
    }

    return res;
}

int main()
{
    string s = "Hey, how are you doing?";
    cout << reverse(s) << endl;
    return 0;
}