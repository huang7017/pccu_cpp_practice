/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A
�м��g�禡distribution�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA
�ȩ̀�(�ۤ��ƧC�ܰ�����)�L�X�έp���G�C
�Фŧ��main�禡�C
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
