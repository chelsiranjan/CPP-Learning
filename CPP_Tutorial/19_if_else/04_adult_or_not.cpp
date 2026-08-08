#include <bits/stdc++.h>
using namespace std;
// write a program that takes input of age
// print adult or not an adult
int main() {
  int age;
  cin >> age;
  if (age >= 18){
    cout << "you are an adult";
  }
  else{
    cout << "you are not an adult";
  }
  return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main() {
  int age;
  cin >> age;
  if (age >= 18){
    cout << "you are an adult";
  }
  else if(age < 10){
    cout << "you are not an adult";
  }
  return 0;
}
// it will print you are not an adult only when age is lower than 10


