#include<iostream>

using namespace std;
int sumOfDigits(int n);
int main()
{
    int num;
    cin >> num;
	cout << sumOfDigits(num)<< endl;      
}

int sumOfDigits(int n){
    int t = 0;
    while(n){
        t+=n%10;
        n/=10;
    }
    return t;
}
