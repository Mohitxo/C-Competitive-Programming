#include <iostream>
#include<map>

using namespace std;
int main(){
    map<int,string>m;

    m[1]="mohit";
    m[2]="kumar";
    m[3]="panjikar";
    
    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
}
    cout<<"Finding is -13 is there or not ->"<<m.count(-13)<<endl;

    cout<<"after erase"<<endl;
    m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;
}
