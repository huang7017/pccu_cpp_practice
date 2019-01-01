#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;

int s(int arr[][columns],int t1,int t2,int d1,int d2);
int main(){
	

	int array[rows][columns];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	
	int max = 0;
	
	for(int i = 0;i < 4;i++){
	    for(int j = 0;j < 4;j++){
	        for(int k = 0;k < 4;k++){
	            for(int e = 0;e < 4;e++){
	                if(s(array,i,j,k,e) > max)
	                    max = s(array,i,j,k,e);
	            }
	        }
	    }
	}
	cout << max;
	
}

int s(int arr[][columns],int t1,int t2,int d1,int d2){
    int t = 0;
    for(int i = t1;i <= t2;i++){
        for(int j = d1; j <= d2;j++){
            t += arr[i][j];
        }
    }
    return t;
}
