#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num;
    std::cout << "\n--- Program 14: Divisibility Check ---\n";
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num % 3 == 0 && num % 5 == 0) {
        std::cout << "Divisible by 3 and 5" << std::endl;
    } else {
        std::cout << "Not divisible by 3 and 5" << std::endl;
    }
    return 0;
}