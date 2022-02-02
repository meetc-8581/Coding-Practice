#include <iostream>

using namespace std;

string removeDup(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    string result = "";

    if (str[0] == str[1])
    {
        result = removeDup(str.substr(1));
    }
    else
    {
        result = removeDup(str.substr(2));
    }
    return result;
}

int main()
{
    string str = "aaaabbeeecdddd";
    cout << str << endl;

    cout << removeDup(str) << endl;

    return 0;
}