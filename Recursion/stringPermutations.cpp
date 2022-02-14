#include <iostream>

using namespace std;

void strPer(string s, string ans)
{
    cout << "func start " << s << endl;

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        cout << endl;
        strPer(ros, ans + c);
    }

    cout << endl;
    cout << endl;
}

int main()
{
    string s = "ABC";

    strPer(s, "");
    return 0;
}