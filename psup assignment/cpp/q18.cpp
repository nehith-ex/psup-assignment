#include <iostream>
#include <string>
#include <cctype>
int main() {
    int month, year;
    std::cout << "\n--- Program 18: Days in Month ---\n";
    std::cout << "Enter month number (1-12): ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;
    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                std::cout << "29 days" << std::endl;
            } else {
                std::cout << "28 days" << std::endl;
            }
            break;
        case 4: case 6: case 9: case 11:
            std::cout << "30 days" << std::endl;
            break;
        default:
            std::cout << "31 days" << std::endl;
            break;
    }
    return 0;
}