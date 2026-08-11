// ****
// *  *
// *  *
// ****


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){

        // first row OR last row
        if(i == 1 || i == n) {

            for(int j = 1; j <= n; j++){
                cout << "*";
            }

        }
        else {

            // first star
            cout << "*";

            // spaces
            for(int j = 1; j <= n-2; j++){
                cout << " ";
            }

            // last star
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}