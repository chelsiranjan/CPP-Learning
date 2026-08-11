// A A A A
// B B B
// C C
// D


#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    char ch = 'A';
    
    for (int i =1; i<=n; i++){
        for (int j =1; j<= n-i+1; j++){
            cout << char(ch+i-1)<< "";
        }
        cout << endl;
    }
    return 0;
}
