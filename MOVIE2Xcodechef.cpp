// Watching Movies at 2x Problem Code: MOVIE2X
// Chef started watching a movie that runs for a total of X minutes.
// Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.
// How long will Chef spend watching the movie in total?
// Note: It is guaranteed that Y is even.

// Input Format
// The first line contains two space separated integers X,Y - as per the problem statement.
// Output Format
// Print in a single line, an integer denoting the total number of minutes that Chef spends in watching the movie.
// Constraints
// 1≤X,Y≤1000
// Y is an even integer

// solution-
#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int total_time;
    total_time=x-y/2;
    cout<<total_time<<endl;
    
	
	return 0;
}
