// 4444
// 4  4
// 4  4
// 4444


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
                cout << n;
            }

        }
        else {

            // first star
            cout << n;

            // spaces
            for(int j = 1; j <= n-2; j++){
                cout << " ";
            }

            // last star
            cout << n;
        }

        cout << endl;
    }

    return 0;
}