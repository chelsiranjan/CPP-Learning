// list is similar to a vector in as
// it can store multiple elements of the same type and dynamically grow in size

// differences btw vector and list
// can add and remove elements from both the beginning and at the end of a list
// while vectors are generally optimized for adding and removing at the 
// unlike vectors, a list does not support random access
// meaning you cannot directly jump to a specific index, or access elements by index numbers

// #include <list>
// list<type> listName

#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called cars that will store strings
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
