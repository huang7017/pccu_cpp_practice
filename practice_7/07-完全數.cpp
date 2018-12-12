#include <iostream>
using namespace std;

bool isPerfect(int n);

int main()
{
   int start, end;
   cin >>start >>end;
   
   for ( int j = start; j <= end; j++ )
   {
      if ( isPerfect( j ) ) 
         cout << j<<" "; 
   } 

   cout << endl;
}

bool isPerfect(int n){
    int s = 1;
    for(int i = 2;i <= n/2;i++){
        if(n%i == 0)
            s+=i;
    }
    return s==n;
}