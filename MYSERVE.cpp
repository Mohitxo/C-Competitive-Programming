#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    int score=p+q;
	    if(score%4==0 || (score-1)%4==0){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
