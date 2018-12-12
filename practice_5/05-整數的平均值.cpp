#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double i,n,t = 0;
    for(i = 0;cin >> n;i++){
        if(n == 9999)break;
        t+= n;
    }
    cout<<fixed <<setprecision(2)<<t/i;
}
