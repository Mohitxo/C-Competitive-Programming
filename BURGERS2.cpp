#include <iostream>
using namespace std;
/*
 X cost of a normal burger
 Y cost of a premium burger
 N  number of burgers Chef wants to buy
 R amount of money Chef has
 */
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    int p = 0;
	    
	    if((r/x)<n)
	    cout<<"-1"<<endl;
	    
	    else if(r/y>=n)
	    cout<<"0"<<" "<<n<<endl;
	    
	    else{
	        p = (r-(y*n))/(x-y);
	        if((r-(y*n))%(x-y)!=0)
	        p=p+1;
	        cout<<p<<" "<<(n-p)<<endl;
	    }
	}
	return 0;
}
