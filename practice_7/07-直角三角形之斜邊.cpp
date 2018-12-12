#include <iostream>
#include <iomanip>
using namespace std;

double hypotenuse(double a,double b);
int main()
{
   double side1; 
   double side2; 
   
   cout << fixed; 

   
   for ( int i = 1; i <= 3; i++ ) 
   {
      cin >> side1 >> side2;

      
      cout << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   } 
}

double hypotenuse(double a,double b){
    double y = 0,c = a*a+b*b;
    while(y*y <= c)
        y+=0.1;
    y-=0.1;
    return y;
}