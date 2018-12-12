#include<iostream>

using namespace std;
int main(){
    int n,a1,a2,a3,a4;
    cin >> n;
    a1 = ((n/1000)+7)%10;
    a2 = ((n/100%10)+7)%10;
    a3 = ((n/10%10)+7)%10;
    a4 = ((n%10)+7)%10;
    
    cout<<a3*1000+a4*100+a1*10+a2;
}
