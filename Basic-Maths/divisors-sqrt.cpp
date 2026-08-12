#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // O(sqrt(n))
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            cout << i << " ";
        }
        if (n/i != i){
            cout << n/i << " ";
        }
    }
    return 0;

}

// sort it but before that first we hv to store the factores in vectors
// then sort the vectors
// O(num of factors*log(num of factors)) or nlog(n))
// O(num of factors)
