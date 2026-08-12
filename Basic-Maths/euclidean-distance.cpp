// euclidean distance
// given n1 > n2 or a > b
// gcd(n1,n2) = gcd(n1-n2,n2)
// gcd(a,b) = gcd(a-b,b)

// gcd(20,15) = gcd(5,15) = gcd(15,5) = gcd(10,5) = gcd(5,5) = gcd(0,5)
// number other than 0 is the gcd ie 15

// a > b
// gcd(a,b) = gcd(a % b,b)
// greater % smaller till one of then is 10

// time complexity
// O(log fi (min(a,b)))

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    
    while (a>0 && b>0){
        if (a>b){
            a = a%b;
        }
        else {
            b = b%a;
        }
    }
    
    
    if (a==0){
        cout << b;
    }
    else{
        cout << a;
    }
    
    return 0;
}
