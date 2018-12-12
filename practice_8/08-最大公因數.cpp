#include <iostream>
using namespace std;
int gcd(int n,int m);
int main()
{
   int a; // first number
   int b; // second number

   // loop for 5 pairs of inputs
   for ( int j = 1; j <= 5; j++ ) 
   {
      cin >> a >> b;
      cout <<  gcd( a, b ) << endl;
   } // end for
} // end main

int gcd(int n,int m){
    if(m == 0)
        return n;
    return gcd(m,n%m);
}