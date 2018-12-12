#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double n,s = 4,t = 0;
    cin >> n;
    for(int i = 1;i <= n*2;i+=2){
        t += s/i;
        s*=-1;
    }
    cout<<fixed << setprecision(8)<<t;
}