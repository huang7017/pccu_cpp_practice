/*
main函式已輸入某班程式設計考試成績至陣列score，
請撰寫函式barchart以依序(自分數低至高的組)印出各組人數長條圖。請勿更動main函式。
*/
#include <iostream>
#include <iomanip>
using namespace std;
void barchart(int name[],int size);
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	barchart(score, arraySize);
}

void barchart(int name[],int size){
	int total[11] = {};
	for(int i = 0;i < size;i++){
		total[name[i]/10]++;	
	}
	for(int i = 0;i < 11;i++){
		for(int j = 0;j < total[i];j++){
			cout << "*";
		}
		cout<<endl;
	}

}
