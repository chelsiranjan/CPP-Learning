
#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p = {10, "Hello"};

    p.first = 20;
    p.second = "World";

    return 0;
}



#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> arr = {{1, 2}, {2, 5}, {5, 6}};
    //   0     1     2
    cout << arr[1].second;
    cout << arr[0].first;
    cout << arr[2].second;

    return 0;
}
