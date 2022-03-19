#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;
    cout<<"capacity -->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;
    
    // here the capacity is equal to 4 because vector
    // is dynamic in nature and its is first creating 
    // another vector than copy paste the data size will remain the same
    
    cout<<"size -->"<<v.size()<<endl;
    
    
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int  i:v){
        cout<<i<<""<<endl;
        
    }
    
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<""<<endl;
    }
    
    cout<<"size of the vector before using clear function "<<v.size()<<endl;
    v.clear();
    cout<<"size of the vector after using clear function "<<v.size()<<endl;
    
    
    // diffrent way to intialize vector
       vector<int> a(5,1);   //size of the vector will be 5 and intialize each element by 1
       cout<<"printing a"<<endl;
       for(int i:a){
       cout<<i<<" "<<endl;
        
    }
    
    // copy a vector to another vector
    vector<int> last(a);
    cout<<"print last vector which contain data of a :"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    return 0;
}

