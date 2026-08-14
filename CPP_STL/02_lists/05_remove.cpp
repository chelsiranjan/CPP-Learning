// .pop_front() to remove an element from the beginning of the list
// .pop_back() to remove an element at the end

#include <iostream>
#include <list>
using namespace std;

int main() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Remove the first element
  cars.pop_front();

  // Remove the last element
  cars.pop_back();
  
  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }

  return 0;
}
