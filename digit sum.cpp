/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int digit_sum=0;
    while(n>0){
        int last_digit=n%10;
        digit_sum=digit_sum+last_digit;
        n=n/10;
    }
    cout<<digit_sum<<
    return 0;
}
