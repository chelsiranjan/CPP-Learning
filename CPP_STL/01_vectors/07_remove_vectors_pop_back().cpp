// to remove an element from the vector, you can use the .pop_back() function
// which removes an element from the end of the 

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cars.pop_back();

  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}


// elements are usually only added and removed from the end of the vector
// if you need to add or remove elements from both ends
// it is often better to use a deque instead of a vector