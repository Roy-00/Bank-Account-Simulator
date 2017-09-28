#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    public:
        Account(double ibalance);
        virtual ~Account();

        void deposit(double iamount);
        void withdraw(double iamount);
        double getBalance();

        void virtual display();

        double operator+(double idollar_amount);

    protected:
        bool Check_Account_Valid_Input_Good = true;
        double balance;
        int accountNumber;
    private:
        static int accountsCreated;
};

#endif // ACCOUNT_H
