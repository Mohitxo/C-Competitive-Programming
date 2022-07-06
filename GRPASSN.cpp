#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,p;
	    cin>>n;
	    unordered_map<int,int>m;
	    for(int i=0; i<n; i++){
	        cin >> p;
	        m[p]++;
	    }
	    bool temp = 0;
	    for(auto item: m){
	        if(item.second%item.first!=0){
	            temp = true;
	            break;
	        }
	    }
	    if(temp){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
