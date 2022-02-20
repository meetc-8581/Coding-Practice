#include <iostream>

using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base" << endl;
    }

    virtual void display()
    {
        cout << "Base Display" << endl;
    }
};

class Der : public Base
{
    void print()
    {
        cout << "Der" << endl;
    }

    void display()
    {
        cout << "Der Display" << endl;
    }
};

int main()
{
    Base *basep;
    Der d;

    basep = &d;

    basep->print();
    basep->display();
    return 0;
}