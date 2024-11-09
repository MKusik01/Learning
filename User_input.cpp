#include <iostream>

int main() {
    int age;
    double height;

    //This part will ask for user input
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters ";
    std::cin >> height;

    // This part will perform calculations
    int age_next_year = age + 1;
    double height_in_cm = height *100;

    //Display results
    std::cout << "Next year you will be " <<age_next_year << " years old!" <<std::endl;
    std::cout << "Your height in centimeters is " << height_in_cm << "cm." <<std::endl;

    //Pause before exiting
    std::cout << "Press Enter to exit...";
    std::cin.get();
    std::cin.get();
    return 0;
}