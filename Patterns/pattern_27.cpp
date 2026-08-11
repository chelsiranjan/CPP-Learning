// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ini_spaces = 0;

    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < n-i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < ini_spaces; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n-i; j++) {
            cout << "*";
        }
        ini_spaces += 2;
        cout << endl;
    
    
    }
    
    
    
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