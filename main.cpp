#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TimeAccount.h"

using namespace std;
int Account::accountsCreated = 1000;
int main(){
    // Regular Account
    cout<<"Account acc1(100.5);"<<endl;
    Account acc1(100.5);
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;
    cout<<"acc1.withdraw(200);"<<endl;
    acc1.withdraw(200);
    cout<<"acc1.withdraw(50);"<<endl;
    acc1.withdraw(50);
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;

    // Savings Account
    cout<<"\nSavingsAccount save1(100, 0.1);"<<endl;
    SavingsAccount save1(100, 0.1);
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;
    save1.addInterest();
    cout<<"Adding interest"<<endl;
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;
    cout<<"save1.withdraw(200);"<<endl;
    save1.withdraw(200);
    cout<<"save1.withdraw(50);"<<endl;
    save1.withdraw(50);
    cout<<"save1.withdraw(-5);"<<endl;
    save1.withdraw(-5);
    cout<<"Account save1 balance = $"<<save1.getBalance()<<endl;

    // Checking Account
    cout<<"\nCheckingAccount check0(100, -2);"<<endl;
    CheckingAccount check0(100, -2);
    cout<<"check0.withdraw(50);"<<endl;
    check0.withdraw(50);
    cout<<"Checking check1 balance = $"<<check0.getBalance()<<endl;  //100

    cout<<"\nCheckingAccount check1(100, 2);"<<endl;
    CheckingAccount check1(100, 2);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(50);"<<endl;
    check1.withdraw(50);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(50);"<<endl;
    check1.withdraw(50);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(20);"<<endl;
    check1.withdraw(20);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.withdraw(6);"<<endl;
    check1.withdraw(6);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;
    cout<<"check1.deposit(20);"<<endl;
    check1.deposit(20);
    cout<<"check1.deposit(-10);"<<endl;
    check1.deposit(-10);
    cout<<"check1.withdraw(-5);"<<endl;
    check1.withdraw(-5);
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;

    // Time Account
    cout<<"\nTimeAccount time1(100, 0.1);"<<endl;
    TimeAccount time1(100, 0.1);
    cout<<"TimeAccount time1 balance = $"<<time1.getBalance()<<endl;
    cout<<"Adding interest"<<endl;
    time1.addInterest();
    cout<<"TimeAccount time1 balance = $"<<time1.getBalance()<<endl;
    cout<<"TimeAccount time1 available funds = $"<<time1.get_funds_available()<<endl;
    cout<<"time1.withdraw(200);"<<endl;
    time1.withdraw(200);
    cout<<"time1.withdraw(5);"<<endl;
    time1.withdraw(5);
    cout<<"time1.withdraw(-3);"<<endl;
    time1.withdraw(-3);
    cout<<"TimeAccount time1 available funds = $"<<time1.get_funds_available()<<endl;
    cout<<"TimeAccount time1 balance = $"<<time1.getBalance()<<endl;

    // Overloaded + operator
    cout<<"\nDemonstrating overloaded + operator"<<endl;
    cout<<"acc1 + 60.5;"<<endl;
    acc1 + 60.5;
    cout<<"Account acc1 balance = $"<<acc1.getBalance()<<endl;

    cout<<"save1 + -50.5;"<<endl;
    save1 + (-50.5);
    cout<<"Savings save1 balance = $"<<save1.getBalance()<<endl;

    cout<<"time1 + 50.5;"<<endl;
    time1 + 50.5;
    cout<<"TimeAccount time1 balance = $"<<time1.getBalance()<<endl;

    cout<<"check1+ 50;"<<endl;
    check1 + 50;
    cout<<"Checking check1 balance = $"<<check1.getBalance()<<endl;

    // Polymorphism
    cout<<"\nDemonstrating polymorphism"<<endl;
    Account *ac1 = &acc1;
    SavingsAccount *ac2 = &save1;
    CheckingAccount *ac3 = &check1;
    TimeAccount *ac4 = &time1;
    Account *accounts[4]={ac1, ac2, ac3, ac4};
    for (int i=0; i<4; i++)
        accounts[i]->display();

    return 0;
}
