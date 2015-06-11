#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
#include "Transaction.h"

using namespace std;

class Account
{
public:
	Account();
	Account(string, int, double);
	int getId();
	double getBalance();
	double getAnnualInterestRate();
	void setId(int);
	void setBalance(double);
	void setAnnualInterestRate(double);
	double getMonthlyInterestRate();
	double withdraw(double,string);
	double deposit(double,string);
	string getName();
	vector<Transaction> getTransactions();
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transactions;
	
};
#endif