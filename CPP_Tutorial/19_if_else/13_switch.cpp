/*
syntax
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int day;
  cin >> day;
  switch (day)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
}

// When C++ reaches a break keyword, it breaks out of the switch block
// This will stop the execution of more code and case testing inside the block