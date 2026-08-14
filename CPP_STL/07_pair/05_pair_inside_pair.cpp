// pair<int, pair<int, int>> p = {1, {10, 20}};

// cout << p.first;
// output 1

// cout << p.second.first;
// output 10

// cout << p.second.second;
// output 20

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, pair<int, int>> p = {1, {10, 20}};
    
    cout << p.first;
    cout << p.second.first;
    cout << p.second.second;

    return 0;
}


