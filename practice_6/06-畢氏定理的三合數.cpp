/*
(Pythagorean Triples) A right triangle can have sides that are all integers. 
A set of three integer values for the sides of a right triangle is called a Pythagorean triple. 
These three sides must satisfy the relationship that the sum of the squares of two of the sides is equal to the square of the hypotenuse.
Input n, find out how many Pythagorean triples for side1, side2 and hypotenuse all no larger than n.
Use a triple-nested for loop that tries all possibilities.
(Note: 3-4-5, 3-5-4, 4-3-5, 4-5-3, 5-3-4 and 5-4-3 are considered as one Pythagorean triple.)
Sample input
10
Sample output
2
Sample input
17
Sample output
5
*/
#include<iostream>

using namespace std;

int main(){
    int n,t=0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1+i; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                if(i*i+j*j == k*k)
                    t++;
            }
        }
    }
    cout << t;
}
