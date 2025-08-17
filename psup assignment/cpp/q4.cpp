#include <iostream>
#include <string>
#include <cctype>
int main() {
    int num;
    std::cout << "\n--- Program 4: Even Number Check ---\n";
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    }
    return 0;
}