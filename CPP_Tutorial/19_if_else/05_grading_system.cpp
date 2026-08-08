#include <bits/stdc++.h>
using namespace std;
/*
a school has following rule for grading system as follows
below 25 F
25 to 44 E
45 to 49 D
50 to 59 C
60 to 79 B
80 to 100 A
ask user to enter marks and get the grade accordingly
*/
int main()
{
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "F";
    }
    if (marks >= 25 && marks <= 44){
        cout << "E";
    }
    if (marks >= 45 && marks <= 49){
        cout << "D";
    }
    if (marks >= 50 && marks <= 59){
        cout << "C";
    }
    if (marks >= 60 && marks <= 79){
        cout << "B";
    }
    if (marks >= 80 && marks <= 100){
        cout << "A";
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "F";
    }
    else if (marks <= 44){
        cout << "E";
    }
    else if (marks <= 49){
        cout << "D";
    }
    else if (marks <= 59){
        cout << "C";
    }
    else if (marks <= 79){
        cout << "B";
    }
    else if (marks <= 100){
        cout << "A";
    }
    return 0;
}