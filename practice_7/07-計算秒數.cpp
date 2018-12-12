#include <iostream>
#include <cmath>
using namespace std;
int seconds(int h,int m,int s);
int main()
{
   unsigned hours; 
   unsigned minutes; 
   unsigned secs; 
   int first;
   int second; 
   int difference; 

   cin >> hours >> minutes >> secs;
   first = seconds( hours, minutes, secs ); 

   cin >> hours >> minutes >> secs;
   second = seconds( hours, minutes, secs ); 
   difference = fabs( first - second ); 

   
   cout << difference << endl;
}

int seconds(int h,int m,int s){
    return (h%12*3600+m*60+s);
}