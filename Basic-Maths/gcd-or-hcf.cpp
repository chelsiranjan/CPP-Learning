// greatest common divisor or highest common factor
// 9 --> 1,3,9
// 12 --> 1,2,3,4,6,12
// common --> 1,3
// hcf of 12 and 9 is 3


#include <bits/stdc++.h>
using namespace std;

// O(min(n1, n2))
int main(){
    int n1, n2;
    cin >> n1 >> n2;

    int gcd = 1;

    for (int i = 1; i <= min(n1, n2); i++){
        if (n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }

    cout << gcd;

    return 0;
}