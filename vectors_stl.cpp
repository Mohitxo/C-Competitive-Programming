// Pair in C++ Standard Template Library (STL)
// Pair is used to combine together two values that may be different in type. 
// Pair provides a way to store two heterogeneous objects as a single unit.

// Vector in C++ STL-
// Vectors are same as dynamic arrays with the ability to resize itself automatically
// when an element is inserted or deleted, with their storage being handled automatically 
// by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators

#include <iostream>
using namespace std;
void printvec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
}
int main()
{   vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        printvec(v);
        v.pushback(x);
    }
    printvec(v);
    return 0;
}
