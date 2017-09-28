#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(double ibalance, double irate) : Account(ibalance){
    rate = irate;
    if (rate < 0.0){
        std::cout << "ERROR: NEGATIVE INTEREST ERROR" << std::endl;
        std::cout << "INTEREST RATE SET TO ZERO" << std::endl;
        rate = 0;
    }
}

SavingsAccount::~SavingsAccount(){
    //dtor
}
//-------------------------------------------------------------------------------------------------------------
 void SavingsAccount::addInterest(){
    double temp = getBalance() * rate;
    deposit(temp);
 }
 void SavingsAccount::display(){
    std::cout << "Savings Account: " << accountNumber << "; Balance: $" << balance << "; Interest Rate: %"
    << rate << std::endl;
 }
