#include <iostream>
#include <string>
#include <cctype>
int main() {
    int choice;
    std::cout << "\n--- Program 20: Beverage Menu ---\n";
    std::cout << "Enter beverage choice (1: Tea, 2: Coffee, 3: Juice): ";
    std::cin >> choice;
    switch (choice) {
        case 1: std::cout << "Tea" << std::endl; break;
        case 2: std::cout << "Coffee" << std::endl; break;
        case 3: std::cout << "Juice" << std::endl; break;
        default: std::cout << "Invalid choice" << std::endl; break;
    }
    return 0;
}