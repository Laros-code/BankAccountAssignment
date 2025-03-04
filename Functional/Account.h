//
// Created by yoric on 3-3-2025.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <memory>
#include <string>
#include <vector>

#include "AccountHolder.h"
#include "CheckingAccount.h"


class Account{
  private:
    AccountHolder holder;
    std::vector<std::shared_ptr<ITransfer>> accounts;

  ITransfer* GetAccountByID(const size_t &ID) const;

  public:
    Account(const AccountHolder &holder, const std::vector<std::shared_ptr<ITransfer>> &accounts);
    ~Account() = default;

  void DepositToChecking(double amount, size_t ID);
  void WithdrawToChecking(double amount, size_t ID);
  int ApplyInterest(double interest, size_t ID);
  void PrintAccountDetails() const;


};


#endif //ACCOUNT_H
