#include <iostream>
using namespace std;

int main() {
  int choice;
  cin >> choice;

  // 1 = Coffee
  // 2 = Tea

  switch (choice) {
    case 1:
      cout << "You ordered Coffee";
      break;

    case 2:
      cout << "You ordered Tea";
      break;

      cout << "Invalid choice";
  }

  return 0;
}
