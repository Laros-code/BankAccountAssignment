//
// Created by yoric on 3-3-2025.
//

#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double balance, double intrest, const unsigned long &ID):
balance(balance), intrest(intrest), AccID(ID){

}

bool CheckingAccount::Deposit(double amount) {
    if (amount < 0) {
        return false;
    }

    balance += amount;
    return true;
}


bool CheckingAccount::Withdraw(double amount) {
    if (amount < 0) {
        return false;
    }

    if (balance < amount) {
        return false;
    }

    balance -= amount;
    return true;
}

bool CheckingAccount::ApplyInterest(double setRate) {
    const auto calcInterest = setRate * (balance / 100);
    return ( Deposit(calcInterest) );
}

unsigned long CheckingAccount::GetID() const {
    return AccID;
}
