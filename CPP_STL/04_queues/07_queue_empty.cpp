// .empty() function returns 1 (true) if the queue is empty and 0 (false) otherwise

#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> cars;

  // Check if the queue is empty
  cout << cars.empty();
  return 0;
}


#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<string> cars;

  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // Check if the queue is empty
  cout << cars.empty();
  return 0;
}
