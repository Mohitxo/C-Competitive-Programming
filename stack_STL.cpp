#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    
    s.push("Mohit");
    s.push("kumar");
    s.push("panjikar");
    
    cout<<"top element -->"<<s.top()<<endl;
    
    s.pop();
    cout<<"Top element -->"<<s.top()<<endl;
    
    cout<<"size of stack "<<s.size()<<endl;
    
    cout<<"Empty or Not "<<s.empty()<<endl;

    return 0;
}
