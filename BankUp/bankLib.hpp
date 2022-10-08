#ifndef BANKLIB_H_INCLUDED
#define BANKLIB_H_INCLUDED

#include<iostream>
#include<fstream>
#include <sstream>
#include <string>
#include <filesystem>

using namespace std;

class MyACCOUNT
{
    public :
    string account_lastname;
    string account_firstname;
    float account_balance;
    int account_number;
    string account_password;
    MyACCOUNT();
    MyACCOUNT(string lastname, string firstname, int number, string password, float balance);

    MyACCOUNT createAccount(string lastname, string firstname, int number, string password, int balance, MyACCOUNT Compte);
    void deleteAccount();
    void viewAccount();
    int addMoney(float balance, float toAdd);
    int substractMoney(float balance, float toSubstract);
};


#endif // BANKLIB_H_INCLUDED
