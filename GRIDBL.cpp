#include <bits/stdc++.h>
using namespace std;

//  N rows and M columns.
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    if(n%2==0 && m%2==0)
	    {
	    cout<<"0"<<endl;
	    }
	    else if(n%2!=0 && m%2!=0)
	    {
	    cout<<n+m-1<<endl;
	    }
	    
	    else{
	        if(n==1 || m==1)
	        {
	        if(n>m){
	                cout<<n<<endl;
	                continue;
	        }
	        else{
	            cout<<m<<endl;
	            continue;
	        }
	        }
	        if(n%2!=0){
	        cout<<m<<endl;
	        }
	        else{
	        cout<<n<<endl;
	        }
	    }
	}
}

