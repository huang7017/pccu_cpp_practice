#include <iostream>
using namespace std;

int integerPower(int a,int b);

int main()
{
   int exp; 
   int base; 
   
   cin >> base >> exp;
   cout << integerPower( base, exp ) << endl;
}

int integerPower(int a,int b){
    int t = 1;
    for(int i = 1;i <= b;i++){
        t*=a;
    }
    return t;
}