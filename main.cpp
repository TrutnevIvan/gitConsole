#include <iostream>

int main(){

    int x1, x2;
    std::cout << "Input 1st number: ";
    std::cin >> x1;
    std::cout << "Input 2nd number: ";
    std::cin >> x2;
    std::cout << "The sum = " << x1+x2 << std::endl;
    std::cout << "The sub = " << x1-x2 << std::endl;
    std::cout << "The division = " << x1/x2 << std::endl;

    return 0;
}