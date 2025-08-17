#include <iostream>

void positiveCheck() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    }
}

int main() {
    positiveCheck();
    return 0;
}