// Chessboard Distance {Codechef}
// The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X1−X2|,|Y1−Y2|).
// You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance

// solution-
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int a=max(x1,x2)-min(x1,x2);
	    int b=max(y1,y2)-min(y1,y2);
	    int sol=max(a,b);
	    cout<<sol<<endl;
	}
	    
	return 0;
}
