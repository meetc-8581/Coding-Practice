#include <iostream>

using namespace std;

void remove(char s[], char x = 'x')
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] != x)
    {
        remove(s + 1);
    }
    else if (s[0] == x)
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        remove(s);
    }
}

int length(char s[])
{
    if (s[0] == '\0')
    {
        return 0;
    }
    int slength = length(s + 1);
    return ++slength;
}

int main()
{
    char s[100];

    cin >> s;

    int l = length(s);

    cout << l << endl;

    remove(s);

    cout << s << endl;
}