#include<iostream>
using namespace std;
void square( int side, char fillCharacter );
int main(){
    int n;
    char f;
    cin >> n >> f;
    square(n,f);
}
void square( int side, char fillCharacter ){
    for(int i = 1; i <= side;i++){
        for(int j = 1;j <= side;j++){
            cout << fillCharacter;;
        }
        cout << endl;
    }
}
