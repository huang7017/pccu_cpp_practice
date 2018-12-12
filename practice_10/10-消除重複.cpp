#include<iostream>
using namespace std;

int main(){
	const int size = 20;
	int n;
	int a[size] = {};
	for(int i =0;i < size;i++){
		cin >> n;
		if(n >= 10 && n <= 100){
			a[i] = n;
		}
	}
	for(int i = 0;i < size;i++){
		for(int j = i+1;j< size;j++){
			if(a[i] == a[j])
				a[j] = 0;
		}
	}
	for(int i = 0;i < size;i++){
		if(a[i] != 0)
			cout << a[i] <<" ";
	}
}
