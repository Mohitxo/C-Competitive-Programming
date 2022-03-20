#include <iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int>maxi;
    
    // min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    
    
//   A max-heap is a complete binary tree in which the value 
//   in each internal node is greater than or equal to the values in the children of that node.
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    maxi.push(5);
    cout<<"Size ->"<<maxi.size()<<endl;
    
    int n=maxi.size();
    
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<maxi.size()<<endl;
    
    
    // In a Min-Heap the key present at the root node must be less than
    // or equal among the keys present at all of its children.
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(4);
    mini.push(5);
    cout<<"Size ->"<<mini.size()<<endl;
    
    int m=mini.size();
    
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<mini.size()<<endl;
    
    cout<<"Empty or not Mini "<<mini.empty()<<endl;
    cout<<"Empty or not Maxi "<<mini.empty()<<endl;
    
    

    return 0;
}
