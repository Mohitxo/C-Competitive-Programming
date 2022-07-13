#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int p1,p2;
	    for(int i=0;i<n;i++){
	        if(arr[i]==1)
	        p1=i;
	        if(arr[i]==n)
	        p2=i;
	    }
	    if(p2>p1)
	    cout<<(p1+n-1-p2)<<endl;
	    else
	    cout<<(p1+n-p2-2)<<endl;
	}
	return 0;
}
