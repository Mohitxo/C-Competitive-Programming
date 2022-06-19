#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int room1,room2; 
        cin>>room1>>room2;
        int floorchef=(room1/10)+min(1,room1%10);
        int floorchefina=(room2/10)+min(1,room2%10);
        int distance=abs(floorchef-floorchefina);
        cout<<distance<<endl;
	}
	return 0;
}
