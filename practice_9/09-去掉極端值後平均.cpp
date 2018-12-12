#include<iostream>
#include<iomanip>

using namespace std;
double average(int n1, int n2, int n3, int n4, int n5);
int main()
{
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a3 >>a4 >> a5;
    cout << setprecision(2)<<fixed<<average(a1,a2,a3,a4,a5)<<endl;
    
}

double average(int n1, int n2, int n3, int n4, int n5){
    int a[5] = {n1,n2,n3,n4,n5};
    int sum = 0,max,min;
    
    max = min = n1;
    
    for(int i = 0;i < 5; i++){
        sum+=a[i];
    }
    
    for(int i= 0;i < 5; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    return (sum-max-min)/3.0;
}
