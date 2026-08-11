//     *
//    **
//   ***
//  ****
//   ***
//    **
//     *


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=2*n-1; i++){
  //for (int i=1; i<2*n; i++)

        int spaces;
        int stars;

        // spaces
        if(i <= n)
            spaces = n-i;
        else
            spaces = i-n;

        for(int j=0; j<spaces; j++){
            cout << " ";
        }

        // stars
        if(i <= n)
            stars = i;
        else
            stars = 2*n-i;

        for(int j=0; j<stars; j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}