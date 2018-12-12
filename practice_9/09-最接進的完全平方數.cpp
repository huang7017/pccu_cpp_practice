#include<iostream>
using namespace std;

int sqrfloor(int n);
int main()
{
    int num;
    cin >> num;
    cout << sqrfloor(num)<<endl;
}

int sqrfloor(int n){
    int n1 = 0;
    while(n1*n1 <= n)
        n1++;
    return (n1-1)*(n1-1);
}
