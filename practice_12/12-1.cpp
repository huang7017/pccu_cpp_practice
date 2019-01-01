/*
請撰寫一個函式maxmin(int a, int b, int c, int*maxPtr, int*minPtr)，該函式將計算a, b, c中之最大值與最小值，並利用參數maxPtr與minPtr傳回。請配合下面主程式執行。
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
