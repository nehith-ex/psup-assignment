#include <iostream>
#include <string>
#include <cctype>
int main() {
    int day;
    std::cout << "\n--- Program 16: Day of the Week ---\n";
    std::cout << "Enter day number (1-7): ";
    std::cin >> day;
    switch (day) {
        case 1: std::cout << "Monday" << std::endl; break;
        case 2: std::cout << "Tuesday" << std::endl; break;
        case 3: std::cout << "Wednesday" << std::endl; break;
        case 4: std::cout << "Thursday" << std::endl; break;
        case 5: std::cout << "Friday" << std::endl; break;
        case 6: std::cout << "Saturday" << std::endl; break;
        case 7: std::cout << "Sunday" << std::endl; break;
        default: std::cout << "Invalid day" << std::endl; break;
    }
    return 0;
}