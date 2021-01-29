#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    :Savings_Account {name, balance, int_rate}, num_withdrawls {0} {
}

//Deposit an additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account::deposit(amount);
}

//Only allowed 3 withdrawls, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawls >= max_withdrawls || (amount > balance * max_withdraw_percent))
        return false; 
    else {
        ++num_withdrawls; 
        return Savings_Account::withdraw(amount); 
    }
}

std::ostream &operator << (std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate
        << "%, withdrawls: " << account.num_withdrawls << "]"; 
    return os; 
}