// write a program to see if a number is a palindrome
// if palindrome print true otherwise false
// if a number is exactly same as the reverse of itself

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int original = n;
    
    int revnum = 0;

    while(n > 0) {
        int lastDigit = n % 10;
        
        revnum = (revnum * 10) + lastDigit;
        
        n=n/10;
    }
    if (revnum == original){
        cout << revnum << endl << "its a palindrome";
    }
    else{
        cout << revnum << endl << "its not a palindrome";
    }
    
    return 0;
    
}