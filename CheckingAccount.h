#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"


class CheckingAccount : public Account
{
    public:
        CheckingAccount(double ibalance, double ifee);
        virtual ~CheckingAccount();

        void deposit(double iamount);
        void withdraw(double iamount);

        double operator+(double idollar_amount);
        void display();

    protected:
        double fee;
    private:
};

#endif // CHECKINGACCOUNT_H
