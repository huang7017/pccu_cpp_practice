#include<iostream>

using namespace std;
void square( int side );
int main(){
    int n;
    cin >> n;
    square(n);
}

void square( int side ){
    for(int i = 0; i < side;i++){
        for(int i = 0;i < side;i++){
            cout <<"*";
        }
        cout<<endl;
    }
}
