#include <iostream>
#include <vector>

using namespace std; 

//Function prototypes
void display_menu(); 
char upper_selection();
void display_nums(vector<int> const &v); 
void add_nums(vector<int> &v); 
void calc_mean(vector<int> const &v);
void find_largest(vector<int> const &v);
void find_smallest(vector<int> const &v);
void quit(); 

int main() {
    //numbers is a vector list of numbers 
    vector<int> numbers;
    
    //selection stores user input
    char selection {}; 
    
    do {
        display_menu(); //displays selection menu
        selection = upper_selection(); //takes user input and capitalizes character
        
        //Run user-defined function based on the value of selection 
        switch (selection) {
            case 'P':
                display_nums(numbers); //displays all of the numbers in the vector 
                break;
                
            case 'A':
                add_nums(numbers);  //allows the user to add new numbers to the vector
                break;
                
            case 'M':
                calc_mean(numbers); //calculates the average of the numbers in the vector
                break;
                
            case 'L':
                find_largest(numbers);  //finds and displays the largest number in the vector
                break;
                
            case 'S':
                find_smallest(numbers); //finds and displays the smallest number in the vector
                break;   
                
            case 'Q':
                quit(); //terminates the program
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

//display_menu outputs the selection menu 
void display_menu() {
    
    cout << "\nP- Print numbers" << endl; 
    cout << "A- Add a number" << endl; 
    cout << "M- Display the mean of the numbers" << endl;
    cout << "S- Display the smallest number" << endl;
    cout << "L- Display the largest number" << endl; 
    cout << "Q- Quit" << endl; 
    cout << "\nEnter your choice: "; 
}

//upper_selection takes user input and capitalizes letter 
char upper_selection() {
    char selection {}; 
    cin >> selection;
    return toupper(selection);  
}

//display_nums outputs the list in the vector numbers 
void display_nums(vector<int> const &v) {
    if (v.size() == 0)
        cout << "[] - The list is empty" << endl; 
    else
        cout << "[";
        for (auto i : v)
            cout << i << " ";
        cout << "]" << endl; 
}

//add_nums adds a number to the vector 
void add_nums(vector<int> &v) {
    int new_number{}; 
    cout << "Enter an integer you want to add to the list: "; 
    cin >> new_number; 
    v.push_back(new_number); 
    cout << new_number << " added to list" << endl; 
    
}

//calc_mean calculates the mean of the vector 
void calc_mean(vector<int> const &v) {
    double average {};
    double total {};
            
    if (v.size() == 0) {
        cout << "Cannot compute mean- list is empty" << endl; 
    }
    else {
        for (int i = 0; i < v.size(); i++)
            total += v[i]; 
            average = total/v.size();
            cout << "The average is: " << average << endl;    
            }
}

//find_largest finds the largest number in the vector
void find_largest(vector<int> const &v) {
    if (v.size() == 0) {
        cout << "Cannot find largest integer- list is empty" << endl; 
    }
    else {
        int largest_num = v.at(0); 
        for (auto i : v)
            if (i > largest_num)
                largest_num = i; 
        cout << "The largest number is: " << largest_num << endl; 
        }
}

//find_smallest finds the smallest number in the vector
void find_smallest(vector<int> const &v) {
     if (v.size() == 0) {
         cout << "Cannot find smallest integer- list is empty" << endl; 
        }
    else {
        int smallest_num = v.at(0); 
        for (auto i : v) 
            if (i < smallest_num)
                smallest_num = i; 
        cout << "The smallest number is: " << smallest_num << endl; 
            }
}

//quit exits the program
void quit() {
    cout << "Goodbye!" << endl; 
}