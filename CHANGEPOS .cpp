#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int sx,sy,ex,ey;
	    cin>>sx>>sy>>ex>>ey;
	    if((sx!=ex) && (sy!=ey)){
	        cout<<'1'<<endl;
	    }
	    else{
	        cout<<'2'<<endl;
	    }
	}
	return 0;
}
