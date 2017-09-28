#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double ibalance, double ifee) : Account(ibalance){
    fee = ifee;
    if (fee < 0.0){
        std::cout << "ERROR: FEE BELOW ZERO" << std::endl;
        std::cout << "FEE CHANGED TO ZERO" << std:: endl;
        fee = 0.0;
    }
}
CheckingAccount::~CheckingAccount(){
    //dtor
}
//-------------------------------------------------------------------------------------------------------------
void CheckingAccount::deposit(double iamount){
    Account::deposit(iamount);
    if (Check_Account_Valid_Input_Good == true){
        Account::withdraw(fee);
    }
    else{
        std::cout << "UNABLE TO CHARGE FEE DUE TO INVALID DEPOSIT AMOUNT" << std::endl;
    }
}
void CheckingAccount::withdraw(double iamount){
    Account::withdraw(iamount);
    if (Check_Account_Valid_Input_Good == true){
        Account::withdraw(fee);
    }
    else{
        std::cout << "UNABLE TO CHARGE FEE DUE TO INVALID DEPOSIT AMOUNT" << std::endl;
    }
}
double CheckingAccount::operator+(double idollar_amount){
    if (idollar_amount < 0.0){
        std::cout << "DEPOSIT AMOUNT BELOW ZERO" << std::endl;
        std::cout << "BALANCE REMAINS UNCHARGED" << std::endl;
        Check_Account_Valid_Input_Good = false;
    }
    else{
        Account::withdraw(fee);
        deposit(idollar_amount);
    }
}
void CheckingAccount::display(){
    std::cout << "Checkings Account: " << accountNumber << "; Balance: $" << balance << "; Transaction Fee: $"
    << fee << std::endl;
}
