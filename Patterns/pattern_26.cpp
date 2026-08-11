// *      *
// **    **
// ***  ***
// ********


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int final_spaces = 2*(n-1);

    for (int i = 1; i <= n; i++) {
        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= final_spaces; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        final_spaces -= 2;
        cout << endl;
        
    
    }

    return 0;
}