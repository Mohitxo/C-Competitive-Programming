#include <iostream>
#include <map>

using namespace std;

int main()
{
    //Map is like a Dict(python) key value-pair
    //Map is sorted look at below
    map<int,string>m;
    
    m[1]="Mohit";
    m[2]="Panjikar";
    m[5]="kumar";
    m[3]="Ronit";
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    // 0->FALSE
    // 1->True
    cout<<"finding an element (5) "<<m.count(5)<<endl;
    cout<<"finding an element (-5) "<<m.count(-5)<<endl;

    return 0;
}
