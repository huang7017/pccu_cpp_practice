#include <iostream>
#include <iomanip>
using namespace std;
int reverseDigits(int n);

int main()
{
   int number; // input number

   for(int i=0;i<3;i++){
	  cin >> number;
	  cout << reverseDigits( number ) << endl;
   }
   
} // end main

int reverseDigits(int n){
    int t = 0;
    while(n){
        t =(t*10)+n%10;
        n/=10;
    }
    return t;
}
