#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string>s;

    s.push("Mohit");
    s.push("kumar");
    s.push("panjikar");

    cout<<"top element of stack is :"<<s.top()<<endl;

    s.pop();
    cout<<"top elemenet after pop operation :"<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    cout<<"empty or not :"<<s.empty()<<endl;
}