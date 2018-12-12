#include<iostream>

using namespace std;

int main(){
    int n,m,min;
    cin >> n >> min;
    for(int i = 1;i < n;i++){
        cin >> m;
        if(m < min)
            min = m;
    }
    cout << min;
}