// Gift Shop and Coupon Problem Code: GFTSHP
// Chef wants to impress Chefina by giving her the maximum number of gifts possible.

// Chef is in a gift shop having N items where the cost of the ith item is equal to Ai. Chef has K amount of money and a 50% off discount coupon that he can use for at most one of the items he buys.

// If the cost of an item is equal to X, then, after applying the coupon on that item, Chef only has to pay ⌈X2⌉ (rounded up to the nearest integer) amount for that item.

// Help Chef find the maximum number of items he can buy with K amount of money and a 50% discount coupon given that he can use the coupon on at most one item.

// Input Format
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains two space-separated integers N and K.
// The next line contains N space-separated integers, where the ith integer Ai denotes the cost of the ith item.
// Output Format
// For each test case, print a single line containing one integer ― the maximum number of items Chef can buy.

// Constraints
// 1≤T≤103
// 1≤N≤105
// 1≤Ai≤109
// 0≤K≤109
// Sum of N over all test cases does not exceed 2⋅105.
// Sample Input 1 
// 3
// 1 4
// 5
// 3 15
// 4 4 5
// 3 10
// 6 7 4
// Sample Output 1 
// 1
// 3
// 2
// Explanation
// Test case 1: After applying the discount, Chef can buy the only available item at ⌈52⌉=3.

// Test case 2: Chef can buy all three items even without using the coupon.

// Test case 3: After applying coupon on the third item, Chef can buy the second and the third item at 7+⌈42⌉= 7+2=9.
// It is not possible for Chef to buy more than two items.
 
// Solution -
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
#define rep(i,n) for (int i=0;i<n;i++)
#define repi(i,x,n) for (int i=x;i<n;i++)
#define br cout<<endl
#define vi vector<int>
using namespace std;

void solve(){
   int n,k;
   cin>>n>>k;
   int a[n];
   rep(i,n) cin>>a[i];
   sort(a,a+n);
   int money = k;
   int lastIndex = -1;
   int cnt = 0;
   rep(i,n){
       if (money>=a[i]){
           money-=a[i];
           cnt+=1;
       }
       else{
           if (money>=((a[i]+1)/2)){
               cnt+=1;
               break;
           }
       }
   }
   cout<<cnt<<endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fastio
    int t;
    t = 1;
    cin>>t;
    while(t--){
  solve();
 }
}
  
