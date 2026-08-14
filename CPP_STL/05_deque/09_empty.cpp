// .empty() function returns 1 (true) if the deque is empty and 0 (false) otherwise

#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars;
  cout << cars.empty();  // Outputs 1 (The deque empty)
  return 0;
}



#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars.empty();  // Outputs 0 (not empty)
  return 0;
}
