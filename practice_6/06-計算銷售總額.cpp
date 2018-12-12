#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double p1,p2,p3,p4,p5;
    p1 = p2 = p3 = p4 = p5 = 0;
    int n,m;
    while(cin >> n){
        if(n == -1) break;
        cin >> m;
        switch(n){
            case 1:
                p1+=m;
                break;
            case 2:
                p2+=m;
                break;
            case 3:
                p3+=m;
                break;
            case 4:
                p4+=m;
                break;
            case 5:
                p5+=m;
                break;
        }
    }
    cout << fixed << setprecision(2) << p1*2.98<<endl
    <<p2*4.50<<endl
    <<p3*9.98<<endl
    <<p4*4.49<<endl
    <<p5*6.87<<endl
    <<p1*2.98+p2*4.50+p3*9.98+p4*4.49+p5*6.87;
}