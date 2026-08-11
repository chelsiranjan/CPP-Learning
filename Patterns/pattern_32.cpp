// ******
// *    *
// *    *
// *    *
// ******


#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    for(int i = 1; i <= rows; i++) {

        if(i == 1 || i == rows) {
            // first and last row
            for(int j = 1; j <= columns; j++) {
                cout << "*";
            }
        }
        else {
            // middle rows
            cout << "*";

            for(int j = 1; j <= columns - 2; j++) {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}