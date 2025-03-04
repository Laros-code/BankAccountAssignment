#include <iostream>

#include "Functional/Account.h"


int main() {

    AccountHolder holder("Yorick", "Laros");
    auto checking = std::make_shared<CheckingAccount>(10000, 1.5, 777);
    auto *accountPtr = new Account(holder,{checking});
    accountPtr->DepositToChecking(1000, 777);
    accountPtr->PrintAccountDetails();

    return 0;
}
