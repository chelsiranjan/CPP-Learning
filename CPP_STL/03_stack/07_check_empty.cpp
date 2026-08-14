#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> cars;

  // Check if the stack is empty
  cout << cars.empty();
  return 0;
}



#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<string> cars;

  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // Check if the stack is empty
  cout << cars.empty();
  return 0;
}
