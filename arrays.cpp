
// as we already know that c++ is a advance version of c and 
// c++ lang comes with string as a data type where as in c if
// we want to make a string we will use char array
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;++i){
       cin>>a[i];
   }
   int sum=0;
   for(int i=0;i<n;++i){
       sum=sum+a[i];
   }
    cout<<sum;
    return 0;
}
