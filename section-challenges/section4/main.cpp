#include <iostream>

int main() {
    //Prompt user to input favorite number and store in int called favorite number
    int favorite_number{};
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;

    //Print output message containing favorite number
    std::cout << "Amazing!! That's my favorite number too! \n";
    std::cout << "No Really!! " << favorite_number << " is my favorite number!" << std::endl;

}
