#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"


class SavingsAccount: public Account{
    public:
        SavingsAccount(double ibalance, double irate);
        virtual ~SavingsAccount();

        void addInterest();

        void display();

    protected:
        double rate;

    private:
};

#endif // SAVINGSACCOUNT_H
