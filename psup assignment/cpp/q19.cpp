#include <iostream>
#include <string>
#include <cctype>
int main() {
    int choice;
    std::cout << "\n--- Program 19: Fuel Type Check ---\n";
    std::cout << "Enter fuel type (1: Petrol, 2: Diesel, 3: Electric): ";
    std::cin >> choice;
    switch (choice) {
        case 1: std::cout << "Petrol" << std::endl; break;
        case 2: std::cout << "Diesel" << std::endl; break;
        case 3: std::cout << "Electric" << std::endl; break;
        default: std::cout << "Invalid choice" << std::endl; break;
    }
    return 0;
}