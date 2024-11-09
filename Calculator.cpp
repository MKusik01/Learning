#include <iostream>

int main(){
    int number;

    //Ask for whole integer input
    std::cout << "Enter a whole number: " << std::endl;
    std::cin >> number;

    //Check if number is odd or even
    if  (number%2==0)
    std::cout << "Your nubmer is even";
    else 
    std::cout << "Your number is odd";

    return 0;
}


