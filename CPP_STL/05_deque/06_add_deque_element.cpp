// to add elements to a deque
// .push_front() to insert an element at the beginning of the deque 
// .push_back() to add an element at the end

#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Add an element at the beginning
  cars.push_front("Tesla");

  // Add an element at the end
  cars.push_back("VW");
  
  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }

  return 0;
}
