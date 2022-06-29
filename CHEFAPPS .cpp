#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    if((x+y+z)<=s){
	        cout<<'0'<<endl;
	    }
	    
	    else if((x+y+z)>=s){
	        if((x+z)<=s){
	            cout<<'1'<<endl;
	        }
	        else{
	            cout<<'2'<<endl;
	        }
	    }
	    
	}
	return 0;
}
