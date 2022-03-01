// Good Program
// In computing, the collection of four bits is called a nibble.

// Chef defines a program as:

// Good, if it takes exactly X nibbles of memory, where X is a positive integer.
// Not Good, otherwise.
// Given a program which takes N bits of memory, determine whether it is Good or Not Good.

// Explanation
// Test case 1: The program requires 8 bits of memory. This is equivalent to 84=2 nibbles. Since 2 is an integer, this program is good.

// Test case 2: The program requires 17 bits of memory. This is equivalent to 174=4.25 nibbles. Since 4.25 is not an integer, this program is not good.

// solution
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Not Good"<<endl;
        }
    }
    return 0;
}
