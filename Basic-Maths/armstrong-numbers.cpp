// armstrong numbers
// sum of cubes of digits of a number is same as the number itself
// 371 = 3***3 + 7***3 + 1***3 = 27+343+1 = 371
// 1634 = 1***3 + 6***3 + 3***3 + 1***3 = 1634


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int original = n;
    int cube_sum =0;
    
    while(n > 0) {

        int lastdigit = n % 10; 
        int cube = lastdigit * lastdigit *lastdigit;
        
        cout << cube << " ";
        
        cube_sum = cube_sum + cube;
    
        n = n / 10;
    }
    
    cout << endl;
    cout << "sum of cubes : " << cube_sum ;
    cout << endl;
    
    if (cube_sum == original){
        cout << endl <<"true" << endl << "its an armstrong number";
    }
    else{
        cout << endl << "false" << endl <<  "its not an armstrong number";
    }

    return 0;
}