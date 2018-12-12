#include <iostream>
using namespace std;
int main(){
	int i = 1,n,max = 0;
	while(i <= 10){
	    cin >> n;
	    if(n > max)max = n;
	    i++;
	}
	cout<<max;
}