#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string>q;

    q.push("Mohit");
    q.push("kumar");
    q.push("panjikar");

    cout<<"first element of queue is :"<<q.front()<<endl;

    cout<<"size before pop :"<<q.size()<<endl;

    q.pop();
    cout<<"size after pop : "<<q.size()<<endl;
    cout<<"top elemenet after pop operation :"<<q.front()<<endl;

    cout<<"size of queue"<<q.size()<<endl;

    cout<<"empty or not :"<<q.empty()<<endl;
}