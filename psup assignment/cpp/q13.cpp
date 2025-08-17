#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num1, num2, num3;
    std::cout << "\n--- Program 13: Smallest of Three Numbers ---\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    std::cout << "Enter third number: ";
    std::cin >> num3;
    if (num1 <= num2 && num1 <= num3) {
        std::cout << "The smallest number is: " << num1 << std::endl;
    } else if (num2 <= num1 && num2 <= num3) {
        std::cout << "The smallest number is: " << num2 << std::endl;
    } else {
        std::cout << "The smallest number is: " << num3 << std::endl;
    }
    return 0;
}