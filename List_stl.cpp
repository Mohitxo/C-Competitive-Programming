#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    
    for(int i:l){
        cout<<i<<" "<<endl;
    }
    
    cout<<"Size of the list is "<<l.size()<<endl;
    
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of the list after erase is  "<<l.size()<<endl;
    
   
     

    return 0;
}
