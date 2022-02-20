#include <iostream>

using namespace std;

class A
{
public:
    void funca()
    {
        cout << "called" << endl;
    }
};

class B
{
public:
    void funcb()
    {
        cout << "Called funcb" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    // B b;
    // b.func();
    C c;
    c.funca();
    c.funcb();

    return 0;
}