#include <iostream>

using namespace std;
int getBit(int n, int pos)
{
    return ((1 << pos) & n) != 0;
}

int setBit(int n, int pos)
{
    return ((1 << pos) | n);
}

int unSetBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}

int bitwisePowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int numberOfOnes(int n)
{
    int c = 0;
    while (n != 0)
    {
        n = n & n - 1;
        c++;
    }
    return c;
}

int main()
{

    cout << getBit(3, 3) << endl;

    cout << setBit(5, 1) << endl;

    cout << unSetBit(5, 1) << endl; // also called clear bit

    cout << updateBit(5, 1, 0) << endl;

    int n;
    cin >> n;

    cout << bitwisePowerOf2(n) << endl;

    cout << "NUmberof ones = " << numberOfOnes(n) << endl;

    return 0;
}