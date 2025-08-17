#include <iostream>
#include <string>
#include <cctype>
int main() {
    char ch;
    std::cout << "\n--- Program 9: Vowel/Consonant Check ---\n";
    std::cout << "Enter a character: ";
    std::cin >> ch;
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << "Vowel" << std::endl;
    } else {
        std::cout << "Consonant" << std::endl;
    }
    return 0;
}