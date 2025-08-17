#include <iostream>
#include <string>
#include <cctype>
int main() {
    char op;
    double num1, num2;
    std::cout << "\n--- Program 17: Calculator ---\n";
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    switch (op) {
        case '+': std::cout << "Result: " << num1 + num2 << std::endl; break;
        case '-': std::cout << "Result: " << num1 - num2 << std::endl; break;
        case '*': std::cout << "Result: " << num1 * num2 << std::endl; break;
        case '/': std::cout << "Result: " << num1 / num2 << std::endl; break;
        default: std::cout << "Invalid operator" << std::endl; break;
    }
    return 0;
}