#include <iostream>

using namespace std;

string sRev(string str, int i)
{
    if (i == str.length() / 2)
    {
        return str;
    }
    str = sRev(str, i + 1);
    char temp = str[i];
    str[i] = str[str.length() - 1 - i];
    str[str.length() - 1 - i] = temp;

    return str;
}

int main()
{
    string str = "lleevveell";
    cout << sRev(str, 0) << endl;

    return 0;
}