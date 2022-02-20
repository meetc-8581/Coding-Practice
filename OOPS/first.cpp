#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int age;
    int gender;

    student()
    {
        name = "jhon";
        age = 10;
        gender = 0;
    }

    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    void printInfo()
    {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "gender = " << gender << endl;
    }
};
int main()
{
    student arr[3];

    student a = student("hello", 99, 0);

    a.printInfo();

    student b;
    student c = a;

    if (c == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}