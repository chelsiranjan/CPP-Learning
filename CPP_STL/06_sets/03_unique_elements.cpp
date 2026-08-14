// elements in a set are unique, which means they cannot be duplicated or equal

#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set with two equal elements (BMW is listed two times)
  set<string> cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
