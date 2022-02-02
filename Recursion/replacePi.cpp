#include <iostream>

using namespace std;

string replacePi(string str)
{
    if (str.length() == 0)
    {
        return "";
    }

    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        replacePi(str.substr(2));
    }
    else
    {
        cout << str[0];
        replacePi(str.substr(1));
    }
    return 0;
}

int main()
{

    string str = "pippxxppiixipi";

    cout << replacePi(str) << endl;
    return 0;
}
