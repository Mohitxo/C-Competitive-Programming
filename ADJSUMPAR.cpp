#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if((sum%2)==0){
	    cout<<"YES"<<endl;
	    }
	    else{
	      cout<<"No"<<endl;  
	    }
	}
	return 0;
}
