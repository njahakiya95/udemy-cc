#include <iostream>
#include "Account_Util.h"

//Displays Account objects in a vector of Account objects 
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: acocunts)
        std::cout << acc << std::endl; 
}

//Deposit supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts ============================================" << std::endl; 
    for (auto &acc:accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << "to" << acc << std::endl; 
        else
            std::cout << "Failed Deposit of" << amount << "to" << acc << std::endl; 
    }
}

//Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ============================================" << std::endl; 
    for (auto &acc:accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << "to" << acc << std::endl; 
        else
            std::cout << "Failed Withdrawl of" << amount << "to" << acc << std::endl; 
    }
}


//Helper functions for Savings Account class

//Displays Savings Account objects in a vector of Savings Account objects 
void display(const std:vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Account ========================================================" << std::endl; 
    for (const auto &acc: accounts)
        std::cout << acc << std::endl; 
}

//Deposits supplied amount to each Savings Account object in the vector
void deposit(atd::vector<Savings_Account> &accounts, double amounts) {
    std::cout << "\n=== Deposting to Savings Account ===========================================" << std::endl; 
    for (auto &acc:accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed deposit of" << amount << "to " << acc << std::endl; 
    }
}

//Withdraw supplied amount from each Savings Account object in the vector
void withdraw(atd::vector<Savings_Account> &accounts, double amounts) {
    std::cout << "\n=== Withdrawing from Savings Account ===========================================" << std::endl; 
    for (auto &acc:accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed withdrawl of" << amount << "to " << acc << std::endl; 
    }
}