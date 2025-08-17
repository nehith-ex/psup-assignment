#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num;
    std::cout << "\n--- Program 6: Positive/Negative Check ---\n";
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num >= 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is negative." << std::endl;
    }
    return 0;
}