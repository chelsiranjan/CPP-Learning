// .first
// .second

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p;

    p.first = 10;
    p.second = "Hello";

    cout << p.first << endl;
    cout << p.second << endl;

    return 0;
}

// pair<int, string> p(10, "Hello");
// pair<int, string> p = {10, "Hello"};