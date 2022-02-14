#include <iostream>

using namespace std;

string moveX(string S)
{
    if (S.length() == 0)
    {
        return "";
    }
    char letter = S[0];

    S = moveX(S.substr(1));

    if (letter == 'x')
    {
        S.append("x");
        return S;
    }

    return letter + S;
}

int main()
{
    string str = "axxcsxdxhfxixuxb";

    cout << moveX(str) << endl;
    return 0;
}