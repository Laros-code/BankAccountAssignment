//
// Created by yoric on 3-3-2025.
//

#ifndef ITRANSFER_H
#define ITRANSFER_H



class ITransfer {
public:
  virtual ~ITransfer() = default;

  virtual unsigned long GetID() const = 0;
  virtual bool Deposit(double amount) = 0;
  virtual bool Withdraw(double amount) = 0;
  virtual bool ApplyInterest(double setRate) = 0;

};

#endif //ITRANSFER_H
