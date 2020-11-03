#include <iostream>
#include <vector>

using namespace std; 

//Function prototypes 
void selection_menu();
void print_number(); 
void add_number(); 
void calc_mean(); 
void smallest_number(); 
void largest_numbers(); 
 

int main() {
    //Declare a vecor of numbers
    
    //Function calls 
    selection_menu(); 
    
    return 0; 
}




//selection_menu function displays the selection menu options
void selection_menu() {
    //Declare char that will store user selection
    char selection {}; 
    
    do {
        cout << "\nP- Print numbers" << endl; 
        cout << "A- Add a number" << endl; 
        cout << "M- Display the mean of the numbers" << endl;
        cout << "S- Display the smallest number" << endl;
        cout << "L- Display the largest number" << endl; 
        cout << "Q- Quit" << endl; 
        cout << "\nEnter your choice: "; 
    
        //Store choice in char selection
        cin >> selection; 
    }
    while (selection != 'Q' && selection != 'q'); 
}

//print_number function prints all of the numbers in the list 
void print_number() {
    
}