// change value of specific element you can refer to index number

#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Change the value of the first element
  cars[0] = "Opel";

  cout << cars[0];
  return 0;
}


// change it using at function as well

#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Change the value of the first element
  cars.at(0) = "Opel";

  cout << cars.at(0); 
  return 0;
}
