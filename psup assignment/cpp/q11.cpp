#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num;
    std::cout << "\n--- Program 11: Positive/Negative/Zero Check ---\n";
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num > 0) {
        std::cout << "Positive" << std::endl;
    } else if (num < 0) {
        std::cout << "Negative" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }
    return 0;
}