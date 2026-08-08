#include <bits/stdc++.h>
using namespace std;
int main(){
    bool isloggedin;
    bool isadmin;
    int securitylevel;

    if (isloggedin && (isadmin || securitylevel >= 2)){
        cout << "access granted";
    }
    else{
        cout << "access denied";
    }
    return 0;
}

// Try changing securityLevel and isAdmin to test different outcomes:
// securityLevel 1 = Access granted
// securityLevel 2 = Access granted
// securityLevel 3 = Access denied
// securityLevel 4 = Access denied
// If isAdmin = true, access is granted