//
// Created by yoric on 3-3-2025.
//

#include "Account.h"
#include <iostream>


ITransfer * Account::GetAccountByID(const size_t &ID) const {
    for (auto const &acc: accounts) {
        if (acc->GetID() == ID) {
            return acc.get();
        }
    }
    return nullptr;
}

Account::Account(const AccountHolder &holder, const std::vector<std::shared_ptr<ITransfer> > &accounts):
    holder(holder), accounts(accounts){

}

void Account::DepositToChecking(double amount, const size_t ID) {
    const auto a = GetAccountByID(ID);
    if (a != nullptr) {
        return;
    }

    if ( !a->Deposit(amount) ){
        std::cout << "[!] Deposit failed" << std::endl;
    }
}

void Account::WithdrawToChecking(double amount, size_t ID) {
    auto result = false;

    for (auto const &acc: accounts) {
        if (acc->GetID() == ID) {
            result = acc->Withdraw(amount);
        }
    }

    if (!result) {
        //do something
    }
}

int Account::ApplyInterest(double interest,  size_t ID) {
    auto result = 0;
    for (auto const &acc: accounts) {
        if (acc->GetID() == ID) {
            result = acc->ApplyInterest(interest);
        }
    }
    return result;
}

void Account::PrintAccountDetails() const {
    std::cout << holder.getName() << " " << holder.getLastName() << std::endl;
    std::cout << "Number of Accounts: " << accounts.size() << std::endl;

}



