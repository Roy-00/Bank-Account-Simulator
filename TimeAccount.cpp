#include "TimeAccount.h"

TimeAccount::TimeAccount(double ibalance, double irate) : SavingsAccount(ibalance, irate){

}
TimeAccount::~TimeAccount(){
    //dtor
}
//-------------------------------------------------------------------------------------------------------------
void TimeAccount::addInterest(){
    double temp = getBalance() * rate;
    funds_availible = funds_availible + temp;
    deposit(temp);
}
void TimeAccount::withdraw(double iamount){
    if (iamount > funds_availible){
        std::cout << "ERROR: NOT ENOUGH FUNDS AVAILIBLE TO WITHDRAW" << std::endl;
        std::cout << "FUNDS AVAILIBLE REMAINS UNCHANGED" << std::endl;
    }
    else if (iamount < 0.0){
        std::cout << "ERROR: WITHDRAW AMOUNT BELOW ZERO" << std::endl;
        std::cout << "FUNDS AVAILIBLE REMAINS UNCHANGED" << std::endl;
    }
    else{
        Account::withdraw(iamount);
        funds_availible = funds_availible - iamount;
    }
}
double TimeAccount::get_funds_available(){
    return funds_availible;
}
void TimeAccount::display(){
    std::cout << "Time Account: " << accountNumber << "; Balance: $" << Account::getBalance() << "; Interest Rate: %"
    << rate << "; Available Funds: $" << funds_availible << std::endl;
}
