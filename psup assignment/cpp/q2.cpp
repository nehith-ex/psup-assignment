#include <iostream>
#include <string>
#include <cctype>
void uppercaseCheck() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        std::cout << "The character is uppercase." << std::endl;
    }
}
int main() {
    positiveCheck();
    return 0;
}