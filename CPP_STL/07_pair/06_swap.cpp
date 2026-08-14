// before
// p1 = {10, 20}
// p2 = {30, 40}

// after
// p1 = {30, 40}
// p2 = (10, 20)

// can also use: swap(p1, p2)

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p1 = {10, 20};
    pair<int, int> p2 = {30, 40};

    p1.swap(p2);
    // swap(p1, p2);

    return 0;
}
