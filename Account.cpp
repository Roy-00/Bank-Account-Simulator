#include "Account.h"
#include <iostream>
#include <string>
using namespace std;


Account::Account(double ibalance)
{
    balance = ibalance;
    if (balance < 0.0){
        cout << "ERROR: INITIAL BALANCE LESS THAN 0.0" << endl;
        cout << "INITIAL BALANCE SET TO 0.0" << endl;
        balance = 0.0;
    }
    accountsCreated++;
    accountNumber = accountsCreated;
}
Account::~Account()
{
    //dtor
}
//-----------------------------------------------------------------------------------------------------------------------
void Account::deposit(double iamount){
    if (iamount < 0.0){
        cout << "DEPOSIT AMOUNT BELOW ZERO" << endl;
        cout << "BALANCE REMAINS UNCHARGED" << endl;
        Check_Account_Valid_Input_Good = false;
    }
    else{
        balance = balance + iamount;
        Check_Account_Valid_Input_Good = true;
    }
}
void Account::withdraw(double iamount){
    if (iamount > balance){
        cout << "WITHDRAW AMOUNT EXCEEDS ACCOUNT BALANCE" << endl;
        cout << "BALANCE REMAINS UNCHARGED" << endl;
        Check_Account_Valid_Input_Good = false;
    }
    else if (iamount < 0.0){
        cout << "WITHDRAW AMOUNT BELOW ZERO" << endl;
        cout << "BALANCE REMAINS UNCHARGED" << endl;
        Check_Account_Valid_Input_Good = false;
    }
    else{
        balance = balance - iamount;
        Check_Account_Valid_Input_Good = true;
    }
}
double Account::getBalance(){
    return balance;
}
void Account::display(){
    cout << "Regular Account: " << accountNumber << "; Balance: $" << balance << endl;
}
double Account::operator+(double idollar_amount){
    if (idollar_amount < 0.0){
        cout << "DEPOSIT AMOUNT BELOW ZERO" << endl;
        cout << "BALANCE REMAINS UNCHARGED" << endl;
        Check_Account_Valid_Input_Good = false;
    }
    else{
        deposit(idollar_amount);
    }
}
