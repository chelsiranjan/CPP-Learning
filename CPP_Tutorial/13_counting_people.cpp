// building a program to count how many people enter and leave a room
// use ++ to increase the counter when someone enters, and -- to decrease it when someone leaves

#include <iostream>
using namespace std;

int main() {
    int peopleInRoom = 0;

    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;
    cout << peopleInRoom << "\n";

    peopleInRoom--;
    cout << peopleInRoom << "\n";
}

