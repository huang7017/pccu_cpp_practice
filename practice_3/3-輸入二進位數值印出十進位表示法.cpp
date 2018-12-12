#include <iostream>
using namespace std;
int main(){
    int t = 0,n,i = 1;
    cin >> n;
    while(n){
        t+=(n%10)*i;
        n/=10;
        i*=2;
    }
	
	cout<<t;
}