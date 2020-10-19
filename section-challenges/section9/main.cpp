#include <iostream>
#include <vector>

using namespace std; 

int main(){
    //Declare variable to store user selection
    char selection = ' '; 
    
    //Declare empty vector to store integers 
    vector<int> numbers {}; 

    //Display selection menu while user doesn't enter Q or q
    do {
        cout << "\nP- Print numbers" << endl; 
        cout << "A- Add a number" << endl; 
        cout << "M- Display the mean of the numbers" << endl;
        cout << "S- Display the smallest number" << endl;
        cout << "L- Display the largest number" << endl; 
        cout << "Q- Quit" << endl; 
        cout << "\nEnter your choice: "; 
        
        //Save user entered input into variable named selection
        cin >> selection; 
        
        //Case where user selects P or p
        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0) {
                cout << "[]- the list is empty" << endl; 
            }
            else {
                cout << "[";
                for (auto i : numbers)
                    cout << i << " ";
                cout << "]" << endl; 
            }
        }
        
        //Case where the user selects A or a
        else if (selection == 'A' || selection == 'a') {
            int new_number{}; 
            cout << "Enter an integer you want to add to the list: "; 
            cin >> new_number; 
            numbers.push_back(new_number); 
            cout << new_number << " added to list" << endl; 
        }
        
        //Case where the user selects M or m
        else if (selection == 'M' || selection == 'm') {
            int average {};
            int total {};
            if (numbers.size() == 0) {
                cout << "Cannot compute mean- list is empty" << endl; 
            }
            else {
                for (int i = 0; i < numbers.size(); i++)
                    total += numbers[i]; 
            average = total/numbers.size();
            cout << "The average is: " << average << endl;    
            }
        }
        
        //Case where the user selects S or s
        else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0) {
                cout << "Cannot find smallest integer- list is empty" << endl; 
            }
            else {
                int smallest_num = numbers.at(0); 
                for (auto i : numbers) 
                    if (i < smallest_num)
                        smallest_num = i; 
                cout << "The smallest number is: " << smallest_num << endl; 
            }
        }
        
        //Case where user selects L or l
        else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0) {
                cout << "Cannot find largest integer- list is empty" << endl; 
            }
            else {
                int largest_num = numbers.at(0); 
                for (auto i : numbers)
                    if (i > largest_num)
                        largest_num = i; 
                cout << "The largest number is: " << largest_num << endl; 
            }
            
        }
        
        //Case where user selects Q or q
        else if (selection == 'Q' || selection == 'q') {
            cout << "Exiting program!" << endl; 
        }
        
        //Case where user enters unknown input
        else {
            cout << "Unknown selection, please try again!" << endl; 
        }
    }
    while (selection != 'Q' && selection != 'q'); 
    
}