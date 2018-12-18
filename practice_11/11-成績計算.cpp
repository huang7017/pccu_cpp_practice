/* 
main函式已輸入某班程式設計考試成績至陣列score，
請參考課本範例撰寫函式maximum, minimum,
average以計算班上最高分，最低分，
以及全班平均。請勿更動main函式。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int maximum(int name[],int size);
int minimum(int name[],int size);
double average(int name[],double size);
int main(){
	const int arraySize=100; 
	int score[arraySize];
	for(int i=0;i<arraySize;i++){
		cin>>score[i];
	}
	cout<<maximum(score, arraySize)<<endl;
	cout<<minimum(score, arraySize)<<endl;
	cout<<fixed<<setprecision(2)<<average(score, arraySize)<<endl;
}

int maximum(int name[],int size){
	int max = 0;
	for(int i = 0;i < size;i++){
		if(name[i] > max)
			max = name[i];
	}
	return max;
}

int minimum(int name[],int size){
	int min = name[0];
	for(int i = 0;i < size;i++){
		if(name[i] < min)
			min = name[i];
	}
	return min;
}

double average(int name[],double size){
	double total = 0;
	for(int i = 0;i < size;i++){
		total+=name[i];
	}
	return total/size;
}
