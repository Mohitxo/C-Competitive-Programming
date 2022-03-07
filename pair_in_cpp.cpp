// Pair in C++ Standard Template Library (STL)
// Pair is used to combine together two values that may be different in type. 
// Pair provides a way to store two heterogeneous objects as a single unit.

#include <iostream>

using namespace std;

int main()
{
    // here we are making a pain 
    pair<int,string>p;
    // we can make a pair of two diff method both are given below
    p={1,"abcd"};
    // p=make_pair(1,"abcd");
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}
