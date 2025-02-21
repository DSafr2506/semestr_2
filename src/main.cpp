#include <iostream>

int Sum(int a, int b);
int difference(int k, int l); 
int multiplication(int h, int j);
double division(double x, double y);

int main(){


    std::cout << "Sum: " << Sum(4,5) << std::endl;
    std::cout << "Difference: " << difference(6,8) << std::endl;
    std::cout << "Multiplication: " << multiplication(8, 9) << std::endl;
    if (15 != 0) {
        std::cout << "Division: " << division(15, 5) << std::endl;
    } else {
        std::cout << "Division by zero is not allowed!" << std::endl;
    }


    return 0;
}


