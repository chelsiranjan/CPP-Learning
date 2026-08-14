// .empty() function returns 1 (true) if the set is empty and 0 (false) otherwise

#include <iostream>
#include <set>
using namespace std;

int main() {
  set<string> cars;
  cout << cars.empty();  // Outputs 1 (The set is empty)
  return 0;
}


#include <iostream>
#include <set>
using namespace std;

int main() {
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars.empty();  // Outputs 0 (not empty)
  return 0;
}
