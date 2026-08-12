// prime numbers
// a number that has exactly 2 factors ie 1 and itself

// brute force approach
// O(n)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int count =0;
    
    for (int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if (count == 2){
        cout << "prime number";
    }
    else {
        cout << "not a prime number";
    }
    
    return 0;
}