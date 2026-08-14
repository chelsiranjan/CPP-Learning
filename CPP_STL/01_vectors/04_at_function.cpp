#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Get the second element
  cout << cars.at(1) << "\n";

  // Get the third element
  cout << cars.at(2) << "\n";
  return 0;
}

// .at() function is often preferred over square brackets [] because it lets you know if an error occurs
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Try to access an element that does not exist (throws an error message)
cout << cars.at(6);