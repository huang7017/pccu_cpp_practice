/*
�м��g�@�Ө禡maxmin(int a, int b, int c, int*maxPtr, int*minPtr)�A�Ө禡�N�p��a, b, c�����̤j�ȻP�̤p�ȡA�çQ�ΰѼ�maxPtr�PminPtr�Ǧ^�C�аt�X�U���D�{������C
*/ 
#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr);

int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
	system("PAUSE");
}


void maxmin(int a,int b,int c,int *maxPtr,int *minPtr){
    *maxPtr = *minPtr = a;
    if(b > *maxPtr)
        *maxPtr = b;
    if(c > *maxPtr)
        *maxPtr = c;
    if(b < *minPtr)
        *minPtr = b;
    if(c < *minPtr)
        *minPtr = c;
}
