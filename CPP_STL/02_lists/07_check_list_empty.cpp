// .empty() function to find out if a list is empty or not
// .empty() function returns 1 (true) if the list is empty and 0 (false) otherwise

#include <iostream>
#include <list>
using namespace std;

int main() {
  list<string> cars;
  cout << cars.empty();  // Outputs 1 (The list is empty)
  return 0;
}



#include <iostream>
#include <list>
using namespace std;

int main() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars.empty();  // Outputs 0 (not empty)
  return 0;
}
