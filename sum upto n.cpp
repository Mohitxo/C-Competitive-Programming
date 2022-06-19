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
    int sum=0;
    
    sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    cout<<sum<<endl;

    return 0;
}
