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
  
  // Get the size of the queue
  cout << cars.size();
  return 0;
}
