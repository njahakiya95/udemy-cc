#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2); 
    cout << fixed; 
    
    //Accounts
    vector <Account> accounts; 
    accounts.push_back(Account {});
    accounts.push_back(Account {"Alex", 2000});
    accounts.push_back(Account {"Ben", 5000});
    
    display(accounts); 
    deposit(accounts, 1000);
    withdraw(accounts, 2000); 
    
    //Savings
    vector<Savings_Account> sav_accounts; 
    sav_accounts.push_back(Savings_Account {}); 
    sav_accounts.push_back(Savings_Account {"Carl", 2000}); 
    sav_accounts.push_back(Savings_Account {"Dan", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000); 
    
    return 0; 
}