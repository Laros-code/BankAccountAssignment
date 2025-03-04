//
// Created by yoric on 3-3-2025.
//

#ifndef ACCOUNTHOLDER_H
#define ACCOUNTHOLDER_H

#include <string>

class AccountHolder {
    private:
      std::string name;
      std::string lastName;
    public:
      AccountHolder(std::string &name, std::string &lastName);
      AccountHolder(std::string &&name, std::string &&lastName);
      ~AccountHolder() = default;
      std::string getName() const;
      std::string getLastName() const;

};



#endif //ACCOUNTHOLDER_H
