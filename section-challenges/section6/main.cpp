#include <iostream>
using namespace std;
/*This room cleaning calculator program takes user input of how many small/large
rooms you would like cleaned and outputs a cost estimate including tax*/

int main() {
    //Declare variables to hold the number of small and large rooms respectively 
    int num_small_rooms{};
    int num_large_rooms{};

    //Prompt user to enter how many small and large rooms they want cleaned
    cout << "Welcome to Frank's Carpet Cleaning Service!\n";

    //Store number of small and large rooms respectively
    cout << "Enter the number of small rooms to be cleaned: ";
    cin >> num_small_rooms;
    cout << "Enter the number of large rooms to be cleaned: ";
    cin >> num_large_rooms;

    //Cleaning fees by room type and tax rate
    const int cost_per_small_room = 25;
    const int cost_per_large_room = 35;
    const double tax = 0.06;

    //Calculation of the the total cost including tax
    double cleaning_cost = (cost_per_small_room * num_small_rooms) + (cost_per_large_room * num_large_rooms);
    double tax_cost = (cleaning_cost* tax);
    double total_cleaning_cost = cleaning_cost + tax_cost;

    //Output of total cost including message
    cout << "The cost estimate is $" << cleaning_cost << "\n";
    cout << "The tax estimate is $" << tax_cost << "\n";
    cout << "===============================================\n";
    cout << "The total estimate is $" << total_cleaning_cost << "\n";
    cout << "This estimate is valid for 30 days \n";
}