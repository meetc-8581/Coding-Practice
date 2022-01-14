#include <iostream>
using namespace std;

int a = 10;

void g(int i, int j = 20, int k = 30)
{
    a++;
    cout << a << endl;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
}

void f()
{

    a++;
    cout << a << endl;
    g(15);
}

int main()
{
    int i;
    cout << a << endl;
    f();
}
