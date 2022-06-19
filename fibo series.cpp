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
    cout<<"enter the value of n ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i =1;i<=n;i++){
        int nextNumber = a+b;
        cout<<nextNumber<<" ";
        
        a=b;
        b=nextNumber;
    }

    return 0;
}
