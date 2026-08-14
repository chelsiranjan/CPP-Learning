// .pop() function 
// remove the front element (the first and oldest element that was added to the queue)

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
  
  // Remove the front element (Volvo)
  cars.pop();

  // Access the front element (Now BMW)
  cout << cars.front();
  return 0;
}


// it will remove volvo
// output bmw as first element