// String protocol Problem Code: STRP
// SolvedSubmit (Practice)
// An input string S of length N is transferred through the network using a special protocol. The protocol can send the string through a series of operations. In one operation, we can choose a lowercase english alphabet C and do one of the following:

// Transfer 1 copy of C through the network.
// Transfer 2 copies of C through the network.
// Each of the above transfers take 1 unit of time.

// Find the minimum time in which we can transfer the entire string S through the network.

// Input Format
// The first line will contain T - the number of test cases. Then the test cases follow.
// First line of each test case contains N - the length of the string S.
// Second line of each test case contains the string S.
// Output Format
// For each test case, output in a single line, the minimum time required to transfer the string.

// Constraints
// 1≤T≤100
// 1≤N≤105
// Sum of N over all test cases does not exceed 105.
// String S contains lowercase english alphabets only.
// Sample Input 1 
// 2
// 5
// cbcdc
// 6
// aabeee
// Sample Output 1 
// 5
// 4
// Explanation
// Test Case 1: String can be transferred through following operations: send 1 copy of character c, send 1 copy of character b, send 1 copy of character c, send 1 copy of character d, and send 1 copy of character c. Thus, total 5 operations are required.

// Test Case 2: String can be transferred through following operations: send 2 copies of character a, send 1 copy of character b, send 1 copy of character e, and send 2 copies of character e. Thus, total 4 operations are required.

// Sol-
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      int i = 0;
      int c_t=0;
      while(i<n){
          if(s[i]==s[i+1]){
              c_t+=1;
              i+=2;
          }
          else{
              c_t++;
              i++;
          }
      }
      cout<<c_t<<endl;
  }
  return 0;
}
