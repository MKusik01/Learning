#include <iostream>
main(){
    int age
    double height

    //This should ask for age
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    //Ask for height in meters
    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    //Condition if/else user is a minor
    if (age<16) { //we can use {} to block code, especially if running more than one line of code when condition is true
    std::cout << "You are a minor" << std::endl;
    }else{
        std::cout << "You are an adult" << std::endl;
    
    }

    //Converting meters to centimeters
    double height_in_cm = height * 100;

    //Display converted height
    std::cout << "Your height in centimeters is " << height_in_cm << " cm" std::endl;

    return 0;
}
    