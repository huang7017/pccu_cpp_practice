#include<iostream>

using namespace std;

int main(){
	int n,i =0;
	int a[5] = {};
	while(cin >> n){
		if(n == -1)break;
		if(n/10 == 10 || n/10 == 9)
			a[0]++;
		else if(n/10 == 8)
			a[1]++;
		else if(n/10 == 7)
			a[2]++;
		else if(n/10 == 6)
			a[3]++;
		else
			a[4]++;
	}
	for(int i = 0;i < 5;i++)
		cout<<a[i]<<" ";
}
