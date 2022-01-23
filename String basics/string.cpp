#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    s = "helloputar";

    // to upper case with transform

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    string s2 = "48967";

    sort(s2.begin(), s2.end(), greater<int>());
    cout << s2 << endl;

    for (int i = 0; i < s.size(); i++)
        s[i] -= ' ';

    cout << s << endl;

    return 0;
}