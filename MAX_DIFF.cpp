// question-https://www.codechef.com/LP1TO201/submit/MAX_DIFF/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(s<=n){
            cout<<s<<endl;
        }
        else{
            // for max diff bw (s-n,n)
            cout<<n*2-s<<endl;
        }
    }
	return 0;
}
