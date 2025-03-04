//
// Created by yoric on 3-3-2025.
//
#include "AccountHolder.h"

AccountHolder::AccountHolder(std::string &name, std::string &lastName) :
name(name), lastName(lastName) {
    if (!lastName.empty()) {
        this->lastName = lastName;
    }

    if (!name.empty()) {
        this->name = name;
    }
}

AccountHolder::AccountHolder(std::string &&name, std::string &&lastName)
    :name(name), lastName(lastName) {

    if (lastName.empty()) {
        lastName = "";
    }

    if (name.empty()) {
        name = "";
    }
}


std::string AccountHolder::getLastName() const {
    return lastName;
}

std::string AccountHolder::getName() const {
    return name;
}