#include<iostream>

using namespace std;

int main(){
    int n,m,t = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> m;
        t+=m;
    }
    cout << t;
}