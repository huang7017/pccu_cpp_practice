#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double n;
    while(cin >> n){
        if(n == -1)break;
        cout <<fixed<<setprecision(2)<<200+n*0.09 << " ";
    }
}