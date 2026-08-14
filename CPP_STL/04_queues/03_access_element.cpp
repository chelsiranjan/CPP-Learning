// cannot access queue elements by referring to index numbers
// you can only access the element at the front or the back, using .front() and .back()

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
  
  // Access the front element (first and oldest)
  cout << cars.front() << "\n";

  // Access the back element (last and newest)
  cout << cars.back() << "\n";
  return 0;
}


// volvo
// mazda
