#include<iostream>
#include<vector>
using namespace std;

int main(){
    // new vector ka size zero hota hai 
    // size vs capacity size ka matlab abhi kitna element present hain
    //  where as capcacity means total kitna memory mili hai isko
    // when we clear command in that case mera size zero hota hai capacity remain the same 
    // type of an dynamic array jo ki size ko double kar leta hai after a certain period of time 
    vector<int>a(5,1);
    cout<<"print the element of the vector :"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int>v;
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;
    cout<<"size -->"<<v.size()<<endl;

    // at and front/back operation on vector 
    cout<<"element at 2nd index -->"<<v.at(2)<<endl;

    cout<<"Front -->"<<v.front()<<endl;
    cout<<"back -->"<<v.back()<<endl;

    // pop operation on vectors
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    // clear operation on vectors and changes in size 
    cout<<"before clear -> size :"<<v.size()<<endl;
    v.clear();
    cout<<"after clear -> size :"<<v.size();

}