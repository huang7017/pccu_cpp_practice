/*
main函式已輸入某班程式設計考試成績至陣列score，
請撰寫函式distribution以統計各組距(0-9, 10-19, …,90-99, 100)人數，
並依序(自分數低至高的組)印出統計結果。
請勿更動main函式。
*/
#include <iostream>
#include <iomanip>
using namespace std;
void distribution(int name[],int size);
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	distribution(score, arraySize);
}

void distribution(int name[],int size){
	int total[11] = {};
	for(int i = 0;i < size;i++){
		total[name[i]/10]++;
	}
	for(int i = 0;i < 11;i++){
		cout << total[i] << " ";
	}
}
