#include <iostream>
#include <string>
#include <cctype>
int main() {
    char ch;
    std::cout << "\n--- Program 15: Character Type Check ---\n";
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (isalpha(ch)) {
        std::cout << "Alphabet" << std::endl;
    } else if (isdigit(ch)) {
        std::cout << "Digit" << std::endl;
    } else {
        std::cout << "Special character" << std::endl;
    }
    return 0;
}