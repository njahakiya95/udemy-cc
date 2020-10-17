#include <iostream>
using namespace std;

/*This currency system program takes from the user an integer value of cents and outputs
how much change to give back starting from dollars and going down to pennies*/

int main() {
    //Prompt user to enter the amount of change in cents and store in input_change
    int input_change {};
    cout << "Enter the number of change in cents: ";
    cin >> input_change;

    //Declare dollar and coin value constants
    const int dollar = 100;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;

    //Declare running change counter
    int running_change {};

    //Convert input change/running change to individual dollar/coin amounts
    int dollar_amount = input_change / dollar;
    running_change = input_change % dollar;
    int quarter_amount = running_change / quarter;
    running_change = running_change % quarter;
    int dime_amount = running_change / dime;
    running_change = running_change % dime;
    int nickel_amount = running_change / nickel;
    running_change = running_change % nickel;
    int penny_amount  = running_change;

    //Output dollar/coin amounts
    cout << "Dollars: " << dollar_amount << "\n";
    cout << "Quarters: " << quarter_amount << "\n";
    cout << "Dimes: " << dime_amount << "\n";
    cout << "Nickels: " << nickel_amount << "\n";
    cout << "Pennies: " << penny_amount << "\n";
}
