//   *
//  ***
// *****
//*******
//*******
// *****
//  ***
//   *


#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // PYRAMID
    for(int i=0; i<n; i++){

        // space
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }

        // stars
        for (int k=0; k<2*i+1; k++){
            cout << "*";
        }

        // space
        for (int l=0; l<n-i-1; l++){
            cout << " ";
        }

        cout << endl;
    }


    // INVERTED PYRAMID
    for(int i=0; i<n; i++){

        // space
        for (int j=0; j<i; j++){
            cout << " ";
        }

        // stars
        for (int k=0; k<2*(n-i-1)+1; k++){
            cout << "*";
        }

        // space
        for (int l=0; l<i; l++){
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}