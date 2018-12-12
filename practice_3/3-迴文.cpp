#include <iostream>
using namespace std;
int main(){
	int n;
	for(int i = 1;i <= 3;i++){
	    cin >> n;
	    if(n/10000 == n%10 && n/1000%10 == n/10%10)
	        cout<<"YES"<<" ";
	    else
	        cout<<"NO"<<" ";
	}
	
}