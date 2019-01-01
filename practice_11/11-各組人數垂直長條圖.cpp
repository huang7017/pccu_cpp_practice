/*
main函式已輸入某班程式設計考試成績至陣列score，�
邾飲g函式vertical_barchart以統計各組距(0-9, 10-19, …,90-99, 100)人數，
並依序(由左至右自分數低至高的組)印出各組人數垂直長條圖。請勿更動main函式。
*/
#include <iostream>
#include <iomanip>
using namespace std;
void verticalbar(int name[],int size);
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	verticalbar(score, arraySize);
}

void verticalbar(int name[],int size){
	int total[11] = {};
	for(int i = 0;i < size;i++){
		total[name[i]/10]++;	
	}
	int max = 0;
	for(int i = 0;i < 11;i++){
		if(total[i] > max)
			max = total[i];
	}
	for(int i = max;i > 0;i--){
		for(int j = 0;j < 11;j++){
			if(total[j] >= i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

}
