// changing elements usinf front and back functions

#include <iostream>
#include <list>
using namespace std;

int main() {
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Change the value of the first element
  cars.front() = "Opel";

  // Change the value of the last element
  cars.back() = "Toyota";

  cout << cars.front() << "\n";
  cout << cars.back() << "\n";
  return 0;
}
