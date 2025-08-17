#include <iostream>
#include <string>
#include <cctype>
int main() {
    int marks;
    std::cout << "\n--- Program 12: Grade Classifier ---\n";
    std::cout << "Enter marks: ";
    std::cin >> marks;
    if (marks >= 90) {
        std::cout << "A" << std::endl;
    } else if (marks >= 75) {
        std::cout << "B" << std::endl;
    } else if (marks >= 50) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }
    return 0;
}