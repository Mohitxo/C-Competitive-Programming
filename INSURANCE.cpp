#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<=y)
	    cout<<x<<endl;
	    else if(x>y)
	    cout<<(y)<<endl;
	    else
	    cout<<(x)<<endl;
	}
	return 0;
}
