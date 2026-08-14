// by default the elements in a set are sorted in ascending order
// if you want to reverse the order
// you can use the greater<type> functor inside the angle brackets

// type specified in greater<type> must match the type of elements in the set


#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called numbers that will store integers
  set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

  // Print set elements
  for (int num : numbers) {
    cout << num << "\n";
  }
  return 0;
}
