/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A�
м��g�禡vertical_barchart�H�έp�U�նZ(0-9, 10-19, �K,90-99, 100)�H�ơA
�ȩ̀�(�ѥ��ܥk�ۤ��ƧC�ܰ�����)�L�X�U�դH�ƫ��������ϡC�Фŧ��main�禡�C
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
