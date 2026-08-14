// to remove all elements from a set, you can use the .clear() function

#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called cars that will store strings
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Remove all elements from the set
  cars.clear();
  
  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
