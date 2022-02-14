#include <iostream>

using namespace std;

void allSubStr(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);

    allSubStr(ros, ans);
    allSubStr(ros, ans + c);
}

int main()
{
    string s = "ABC";

    allSubStr(s, "");

    return 0;
}