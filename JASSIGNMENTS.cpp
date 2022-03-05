// Janmansh and Assignments Problem Code: JASSIGNMENTS
// Add problem to Todo list
// Submit
// Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at X pm. Each assignment takes him 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

// Input Format
// The first line will contain T - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer X - the time when Janmansh starts doing the assignemnts.
// Output Format
// For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.

// You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical)

// Constraints
// 1≤T≤10
// 1≤X≤9
// Sample Input 1 
// 2
// 7
// 9
// Sample Output 1 
// Yes
// No

// solution-
#include<bits/stdc++.h>
using namespace std;

int solve(){
    int x;cin>>x;
    int time_in_hour = x+3;
    (time_in_hour>10)?cout<<"NO"<<endl : cout<<"yes"<<endl;
    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
  
