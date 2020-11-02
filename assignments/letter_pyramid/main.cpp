#include <iostream>
#include <string> 

using namespace std; 

int main () {
    //Declare empty string called input_chars to store input
    string input_chars {}; 

    //Prompt user to enter a line of characters then store in input_chars 
    cout << "Enter a string of characters to build a pyramid from: "; 
    getline (cin, input_chars); 
    
    //Create variable num_letters to determine the number of input characters 
    size_t num_letters = input_chars.length(); 
    
    //Create a position variable that acts as a counter to determine which row the loop is working on
    int position {0}; 
    
    //Loop over each character in input_chars and create pyramid 
    for (char i: input_chars) {
        
        //The num_spaces variable helps determine how many spaces to print per row
        size_t num_spaces = num_letters - position;
        
        //Output the number of empty spaces for each row 
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces; 
        }
        
        //Output each character up to center character
        for (size_t j = 0; j < position; j++) {
            cout << input_chars.at(j); 
        }
        
        //Output the center character 
        cout << i; 
        
        //Output remaining characters in reverse order 
        for (int j = position - 1; j >= 0; --j) {
            cout << input_chars.at(j); 
        }
        
        //Flush output stream
        cout << endl; 
    
        //Increment position to work on the next row
        ++position; 
    }
}