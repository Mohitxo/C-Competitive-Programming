// What is a deque STL?
// Double-ended queues are a special case of queues where insertion and deletion 
// operations are possible at both the ends. The functions for deque are same as vector, 
// with an addition of push and pop operations for both front and back.
#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>d;

    d.push_back(1);
    d.push_back(3);
    d.push_front(2);
    // for printing the deque 
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    // printing the deque after after popping the element 
    cout<<"after popping :"<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

// operations on deque - at,front,back ,empty
    cout<<"print the first index element -->"<<d.at(1)<<endl;
    cout<<"printing the front -->"<<d.front()<<endl;
    cout<<"printing the back-->"<<d.back()<<endl;
    cout<<"Empty or not"<<d.empty()<<endl;
}