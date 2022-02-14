// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S)
{
    int modulo = 1e9 + 7;
    int n = S.size();
    int numOfAs = count(S.begin(), S.end(), 'a');

    if (numOfAs % 3 != 0)
    {
        return 0;
    }

    if (numOfAs == 0)
    {
        return (((n - 1) * (n - 2)) / 2) % modulo; // number of combinations without a just b
    }

    numOfAs /= 3;

    int count = 0;
    int key1 = 0;
    int key2 = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'a')
            count++;
        if (count == numOfAs)
        {
            key1++;
        }
        else if (count == 2 * numOfAs)
        {
            key2++;
        }
    }
    return (key1 * key2) % modulo;
}
