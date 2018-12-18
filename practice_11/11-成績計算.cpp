/* 
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A
�аѦҽҥ��d�Ҽ��g�禡maximum, minimum,
average�H�p��Z�W�̰����A�̧C���A
�H�Υ��Z�����C�Фŧ��main�禡�C
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
