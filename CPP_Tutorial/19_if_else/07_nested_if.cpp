/*
syntx
if (condition1) {
  // code to run if condition1 is true
  if (condition2) {
    // code to run if both condition1 and condition2 are true
  }
}
*/


/*
int x = 15;
int y = 25;

if (x > 10) {
  cout << "x is greater than 10\n";

  // Nested if
  if (y > 20) {
    cout << "y is also greater than 20\n";
  }
}

// output
// x is greater than 10
// y is also greater than 20
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    bool iscitizen;

    if (age >= 18){
        cout << "you can vote";

        if (iscitizen = true){
            cout << "and you are a citizen, so you can vote";  
        }
        else{
            cout << "but you must be a citizen to vote";
        }
    }
    else{
        cout << "you are not old enough to vote";
    }
    return 0;
}

