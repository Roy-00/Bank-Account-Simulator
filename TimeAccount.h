#ifndef TIMEACCOUNT_H
#define TIMEACCOUNT_H
#include "SavingsAccount.h"


class TimeAccount : public SavingsAccount
{
    public:
        TimeAccount(double ibalance, double irate);
        virtual ~TimeAccount();

        void addInterest();
        void withdraw(double iamount);
        double get_funds_available();

        void display();

    protected:
        double funds_availible = 0;
    private:
};

#endif // TIMEACCOUNT_H
