#include<iostream>

using namespace std;

int main(){
    int a,m,n,t = 0;
    cin >> m >> n;
    for(int i = 1;i <= n;i++){
        cin >> a;
        if(a < m)
            t++;
    }
    cout << t;
}