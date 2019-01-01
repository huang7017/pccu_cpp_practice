#include <iostream>
#include <iomanip>

using namespace std;
const int rows=4;
const int columns=4;

int sumOfElements(int arr[][columns], int tl_r, int tl_c, int dr_r, int dr_c);

int main(){
	

	int array[rows][columns];
	int tl_row, tl_column, dr_row, dr_column;
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
		   cin >> array[i][j];
		}
	}
	cin >> tl_row>>tl_column>>dr_row>>dr_column;
	
	cout<<sumOfElements(array, tl_row, tl_column, dr_row, dr_column);
	
}

int sumOfElements(int arr[][columns], int tl_r, int tl_c, int dr_r, int dr_c){
    int t = 0;
    for(int i = tl_r; i <= dr_r;i++){
        for(int j = tl_c; j <= dr_c;j++){
            t += arr[i][j];
        }
    }
    return t;
}
