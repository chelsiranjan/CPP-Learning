#include <iostream>
#include <queue>
using namespace std;

int main() {
  // Create a queue of strings
  queue<string> cars;

  // Add elements to the queue
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Change the value of the front element
  cars.front() = "Tesla";

  // Change the value of the back element
  cars.back() = "VW";

  // Access the front element
  cout << cars.front() << "\n";

  // Access the back element
  cout << cars.back() << "\n";
  return 0;
}


// tesla
// bmw
// ford
// vw