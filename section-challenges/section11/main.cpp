#include <iostream>
#include <vector>

using namespace std; 

//Function prototypes
void display_menu(); 
char upper_selection(); 

int main() {
    //Numbers is a vector list of numbers 
    vector<int> numbers;
    
    //Selection stores user input
    char selection {}; 
    
    do {
        //Display menu of options and take input and make it uppercase 
        display_menu(); 
        selection = upper_selection(); 
        
        //Run user-defined function based on the value of selection 
        switch (selection) {
            case 'P':
                //function
                break;
            case 'A':
                //function
                break;
            case 'M':
                //function
                break;
            case 'L':
                //function
                break;
            case 'Q':
                //function
                break; 
        }
    }
    while (selection != 'Q'); 
    
    //Flush output stream
    cout << endl; 
    return 0; 
}


/********************************************************
User-defined functions
********************************************************/

//Display_menu outputs the selection menu 
void display_menu() {
    
    cout << "\nP- Print numbers" << endl; 
    cout << "A- Add a number" << endl; 
    cout << "M- Display the mean of the numbers" << endl;
    cout << "S- Display the smallest number" << endl;
    cout << "L- Display the largest number" << endl; 
    cout << "Q- Quit" << endl; 
    cout << "\nEnter your choice: "; 
}

//Upper_selection takes user input and capitalizes letter 
char upper_selection() {
    char selection {}; 
    cin >> selection;
    return toupper(selection);  
}

//Display_numbers outputs the list in the vector numbers 