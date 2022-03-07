// Pair in C++ Standard Template Library (STL)
// Pair is used to combine together two values that may be different in type. 
// Pair provides a way to store two heterogeneous objects as a single unit.
// making pair with the help of array
#include <iostream>

using namespace std;

int main()
{
    // here we are making a pain 
    pair<int,int>p_array[3];   //define array of size 3
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;++i){       //using for loop to access each and every element in array
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    return 0;
}
