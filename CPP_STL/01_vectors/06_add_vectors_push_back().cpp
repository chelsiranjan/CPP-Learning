// biggest difference between a vector and an array is that vectors can grow dynamically
// that means you can add or remove elements from the vector

// to add an element to the vector, you can use the .push_back() function
// which will add an element at the end of the vector


#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cars.push_back("Tesla");
  cars.push_back("VW");
  cars.push_back("Mitsubishi");
  cars.push_back("Mini");

  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
