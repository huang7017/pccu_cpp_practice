#include <iostream>
#include <iomanip>
int main(){
    int n;
    std::cin >> n;
	std::cout << std::fixed << std::setprecision(2)<< 32+9*n/5.0<<std::endl;
}
