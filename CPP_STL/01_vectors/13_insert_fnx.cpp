#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v(2, 100);

    // print vector
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    // v = [100, 100]



    v.insert(v.begin(), 300);

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    // [300, 100, 100]



    // insert(position, count, value)
    v.insert(v.begin() + 1, 2, 10);

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    // [300, 10, 10, 100, 100]
   

    return 0;
}