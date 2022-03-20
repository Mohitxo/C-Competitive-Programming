#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string>q;
    
    q.push("Mohit");
    q.push("kumar");
    q.push("panjikar");
    
    cout<<"First element is -->"<<q.front()<<endl;
    cout<<"size of the queue "<<q.size()<<endl;
    
    q.pop();
    cout<<"First element after pop is -->"<<q.front()<<endl;
    
    cout<<"size of the queue after pop "<<q.size()<<endl;
    

    return 0;
}
