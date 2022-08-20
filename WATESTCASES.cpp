#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int  n, x;
    string s;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >> arr[i];
    cin >> s;
    x = 101;
    for (int i=0; i<n;++i)
        if (s[i] == '0')
            x = min(x, arr[i]);
    cout<<x<<endl;
    }
}
