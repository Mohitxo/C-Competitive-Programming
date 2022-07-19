#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<char> A(n-1);
    
    for(int i=1; i<n; i++){
        cin>>A[i-1];
    }
    
    char last = '0';
    int count = A.back()=='0';
    
    for(int a:A){
        if(last == '0' && a == '1'){
            count++;
        }
        last = a;
    }
    cout<<count<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solution();
    }
	return 0;
}
