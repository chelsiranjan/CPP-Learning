// cannot access list elements by referring to index numbers, like with arrays and vectors
//  you can access the first or the last element with the .front() and .back() functions

#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called cars that will store strings
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the first element
  cout << cars.front() << "\n";

  // Get the last element
  cout << cars.back() << "\n";
  return 0;
}
