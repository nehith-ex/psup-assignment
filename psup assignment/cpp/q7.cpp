#include <iostream>
#include <string>
#include <cctype>
int main() {
    int age;
    std::cout << "\n--- Program 7: Voting Eligibility Check ---\n";
    std::cout << "Enter age: ";
    std::cin >> age;
    if (age >= 18) {
        std::cout << "Eligible to vote." << std::endl;
    } else {
        std::cout << "Not eligible to vote." << std::endl;
    }
    return 0;
}