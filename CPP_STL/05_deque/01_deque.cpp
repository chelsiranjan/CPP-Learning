// deque (stands for double-ended queue)
// elements can be added and removed from both ends (at the front and the back)
// can also access elements by index numbers
// #include <deque>
// deque<type> dequeName

#include <iostream>
#include <deque>
using namespace std;

int main() {
  // Create a deque called cars that will store strings
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print deque elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
