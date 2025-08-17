#include <iostream>
#include <string>
#include <cctype>
void passwordCheck() {
    std::string password;
    std::cout << "Enter password: ";
    std::cin >> password;
    if (password == "admin123") {
        std::cout << "Welcome" << std::endl;
    }
}
int main() {
    passwordCheck();
    return 0;
}