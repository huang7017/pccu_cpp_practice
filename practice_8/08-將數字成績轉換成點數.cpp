#include <iostream>
using namespace std;

int qualityPoints(int n);

int main()
{
   int average; // current average

   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cin >> average;
      cout << qualityPoints( average ) << endl;
   } // end for

   cout << endl;
} // end main

int qualityPoints(int n){
    if(n >= 90 && n <= 100)
        return 4;
    else if(n >= 80 && n <= 89)
        return 3;
    else if(n >= 70 && n <= 79)
        return 2;
    else if(n >= 60 && n <= 69)
        return 1;
    else
        return 0;
}