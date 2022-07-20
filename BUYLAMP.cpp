#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        
        if(n==k)
        cout<<(k*x)<<endl;
        else if(k==0)
        cout<<n*(min(x,y))<<endl;
        else
        cout<<(k*x)+(n-k)*(min(x,y))<<endl;
    }
	return 0;
}
