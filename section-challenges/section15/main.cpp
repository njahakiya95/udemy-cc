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
  
 
 
    //Checking
    vector<Checking_Account> check_accounts; 
    check_accounts.push_back(Checking_Account {}); 
    check_accounts.push_back(Checking_Account {"Taylor", 2000}); 
    check_accounts.push_back(Checking_Account {"Hunter", 5000});
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000); 
    
    
    

    //Trust
    vector<Trust_Account> trust_accounts; 
    trust_accounts.push_back(Trust_Account {}); 
    trust_accounts.push_back(Trust_Account {"Ashley", 2000}); 
    trust_accounts.push_back(Trust_Account {"Patrick", 5000, 5.0});
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);

    return 0; 
}