/*
main¨ç¦¡¤w¿é¤J¬Y¯Zµ{¦¡³]­p¦Ò¸Õ¦¨ÁZ¦Ü°}¦Cscore¡A½
Ð¼¶¼g¨ç¦¡vertical_barchart¥H²Î­p¦U²Õ¶Z(0-9, 10-19, ¡K,90-99, 100)¤H¼Æ¡A
¨Ã¨Ì§Ç(¥Ñ¥ª¦Ü¥k¦Û¤À¼Æ§C¦Ü°ªªº²Õ)¦L¥X¦U²Õ¤H¼Æ««ª½ªø±ø¹Ï¡C½Ð¤Å§ó°Êmain¨ç¦¡¡C
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
