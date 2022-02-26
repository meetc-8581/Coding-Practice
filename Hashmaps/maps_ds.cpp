#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, int> myMap;
    std::pair<string, int> p("abc", 1);

    myMap.insert(p);
    cout << myMap << endl;
    return 0;
}