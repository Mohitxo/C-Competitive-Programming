#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int>d;
    
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    
    cout<<"print first index element -->"<<d.at(0)<<endl;
    
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    
    cout<<"Deque is Empty or not -->"<<d.empty()<<endl;
    
    cout<<"before erase "<<d.size()<<endl;
    
    d.erase(d.begin(),d.begin()+1);
    cout<<"after earse "<<d.size()<<endl;
    
 
    
      for(int i:d){
        cout<<i<<endl;
        }
    
    return 0;
}
