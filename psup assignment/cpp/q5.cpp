#include <iostream>
#include <string>
#include <cctype>
int main() {
    int marks;
    std::cout << "\n--- Program 5: Pass Mark Check ---\n";
    std::cout << "Enter marks: ";
    std::cin >> marks;
    if (marks >= 40) {
        std::cout << "The student has passed." << std::endl;
    }
    return 0;
}