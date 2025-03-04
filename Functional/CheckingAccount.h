//
// Created by yoric on 3-3-2025.
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "../Interface/ITransfer.h"

class CheckingAccount : public ITransfer{
  private:
    double balance;
    double intrest;
    unsigned long AccID = 0;
  public:
    CheckingAccount(double balance, double intrest, const unsigned long &ID);
    bool Withdraw(double amount) override;
    bool ApplyInterest(double setRate) override;
    bool Deposit(double amount) override;
    unsigned long GetID() const override;


};



#endif //CHECKINGACCOUNT_H
