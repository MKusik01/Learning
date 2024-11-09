#include <iostream>
#include <string>

int main() {
    long long student_number;
    std::string name;

    // Asks for student number
    std::cout << "Enter your student number: ";
    std::cin >> student_number;

    // Asks for name
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    // Outputs the result
    std::cout << "Hi " << name << ", your student number is " << student_number << "." << std::endl;

    return 0;
}


