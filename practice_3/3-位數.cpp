#include <iostream>
using namespace std;
int main(){
	int t = 0,n;
	cin >> n;
	while(n){
	    t++;
	    n/=10;
	}
	cout << t;
}