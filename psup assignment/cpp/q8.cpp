#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num1, num2;
    std::cout << "\n--- Program 8: Compare Two Numbers ---\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << "The larger number is: " << num1 << std::endl;
    } else {
        std::cout << "The larger number is: " << num2 << std::endl;
    }
    return 0;
}