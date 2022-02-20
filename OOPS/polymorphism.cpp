#include <iostream>

using namespace std;

class Complex
{
    int real, img;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;

        return res;
    }
    void print()
    {
        cout << real << "+ i" << img << endl;
    }
};

int main()
{
    Complex a(10, 5);
    Complex b(20, 5);
    a.print();
    b.print();

    Complex c = a + b;

    c.print();

    return 0;
}