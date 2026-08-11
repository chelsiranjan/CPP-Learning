// A
// AB
// ABC
// ABCD


#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    char ch = 'A';
    
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout << char('A' + j - 1);
        }
    cout << endl;    
    }
    
    
    return 0;
    
    
}

