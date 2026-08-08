/*
syntax

if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}

*/

#include <iostream>
using namespace std;

int main()
{
    int time = 20;
    if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    return 0;
    // output Good evening.
}



#include <iostream>
using namespace std;

int main()
{
    int time = 16;

    if (time < 12)
    {
        cout << "Good morning.";
    }
    else if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    return 0;
    // Output Good day.
}



#include <iostream>
using namespace std;

int main()
{
    int time = 16;

    bool isMorning = time < 12;
    bool isDay = time < 18;

    if (isMorning)
    {
        cout << "Good morning.";
    }
    else if (isDay)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    return 0;
}