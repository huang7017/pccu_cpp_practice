/*
main�禡�w��J�Y�Z�{���]�p�Ҹզ��Z�ܰ}�Cscore�A
�м��g�禡barchart�H�̧�(�ۤ��ƧC�ܰ�����)�L�X�U�դH�ƪ����ϡC�Фŧ��main�禡�C
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
