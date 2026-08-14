// to access an element at a specified index
// you can use the .at() function and specify the index number

#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the second element
  cout << cars.at(1) << "\n";

  // Get the third element
  cout << cars.at(2) << "\n";
  return 0;
}

// .at() function is often preferred over square brackets [] 
// because it throws an error message if the element is out of range

#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Try to access an element that does not exist (will throw an exception)
  cout << cars.at(6);
  return 0;
}
