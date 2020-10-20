#include <iostream>
#include <vector>
#include <string> 

using namespace std;

int main() {
    //Declare alphabet and key string 
    string alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key = {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}; 
    
    //Collect and store user input into raw_message variable 
    string raw_message {}; 
    cout << "Enter your secret message: "; 
    getline(cin, raw_message); 
    
    //Variable holds the encrypted message to be printed out
    string encrypted_message {};
    
    //Encrypt raw message and output as encrypted message
    for (char i: raw_message) {
        size_t position = alphabet.find(i); 
        if (position != string::npos) {
            char sub_char {key.at(position)}; 
            encrypted_message += sub_char; 
        }
        else {
            encrypted_message += i; 
        }
    }
    cout << "\nEncrypted message: " << encrypted_message << endl; 
    
    //Variable holds the encrypted message to be decrypted and printed out
    string decrypted_message {}; 
    
    //Decrypt encrypted message and output raw message
    for (char i: encrypted_message) {
        size_t position = key.find(i);
        if (position != string::npos) {
            char sub_char {alphabet.at(position)}; 
            decrypted_message += sub_char; 
        }
        else {
            decrypted_message += i; 
        }
    }
    cout << "\nDecrypted message: " << decrypted_message << endl; 
    
    //Flush stream
    cout << endl; 
}