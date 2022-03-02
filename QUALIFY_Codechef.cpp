// Qualify the round Problem Code: QUALIFY
// In a coding contest, there are two types of problems:

// Easy problems, which are worth 1 point each
// Hard problems, which are worth 2 points each
// To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems. Will Chef qualify or not?
  
// Input Format
// The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
// Each test case consists of a single line of input containing three space-separated integers — X,A, and B.
  
// Output Format
// For each test case, output a new line containing the answer — Qualify if Chef qualifies for the next round, and NotQualify otherwise.

// Each character of the answer may be printed in either uppercase or lowercase. For example, if the answer is Qualify, outputs such as qualify, quALiFy, QUALIFY and QuAlIfY will also be accepted as correct

// Explanation
// Test Case 1: Chef solved 9 easy problems and 3 hard problems, making his total score 9⋅1+3⋅2=15. He needs at least 15 points to qualify, which he has and hence he qualifies.

// solution -
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,a,b;
	    cin>>x>>a>>b;
	    if(x<=(a*1)+(b*2)){
	        cout<<"Qualify"<<endl;
	    }
	    else{
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
