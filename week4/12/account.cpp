#include <iostream>
#include "account.h"

namespace Bank {

Account::Account(const string &name, int balance)
    : owner(name), balance(balance) { }

Account::~Account() {
    std::cout << owner << ": 객체 소멸" << std::endl;
}

void Account::deposit(int amount) {
    balance += amount;
}

int Account::withdraw(int amount) {
    balance -= amount;
    return amount;
}

int Account::check() const {
    return balance;
}

string Account::getOwner() const {
    return owner;
}

} // namespace Bank