#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1 || n == 3 || n == 5 ||  n == 7 || n == 8 || n == 10 || n == 12)
        cout<<31;
    else if(n == 4 || n == 6 || n ==9 || n == 11)
        cout<<30;
    else if(n == 2)
        cout<<28;
}