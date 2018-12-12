#include<iostream>

using namespace std;

int main(){
    int n;
    for(int i = 1; i <= 5;i++){
        cin >> n;
        for(int j = 1;j <= n;j++)
            cout <<"*";
        cout<<endl;
    }
}