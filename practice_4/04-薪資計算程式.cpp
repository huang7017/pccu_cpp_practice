#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double t,m;
    while(cin >> t){
        if(t == -1)break;
        cin >> m;
        if(t <= 40){
            cout << fixed << setprecision(2)<< t*m<<" ";
        }
        else{
            cout << fixed << setprecision(2)<< t*m+(t-40)*m/2<<" ";
        }
    }
}
