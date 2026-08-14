// you cannot access stack elements by referring to index number like you would with arrays and vectors
// you can only access the top element, which is done using the .top() function

#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Access the top element
  cout << cars.top();
  return 0;
}
