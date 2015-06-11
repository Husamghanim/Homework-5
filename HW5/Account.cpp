#include "Account.h"

#include <string>

double Account::annualInterestRate = 0;
Account::Account()
{
	id = 0;
	balance = 0;
}
Account::Account(string newName, int newId, double newBalance)
{
	name = newName;
	id = newId;
	balance = newBalance;
}
double Account::withdraw(double amount,string description)
{
	int a;
	
	if (amount <= balance)
	{
		a = amount;
		balance -= amount;
	}
	else
		a = 0;
	 transactions.push_back(Transaction('W', amount, balance, description));
	return a;
}
double Account::deposit(double amount, string description)
{
	balance += amount;
	transactions.push_back(Transaction('D', amount, balance, description));
	return balance;
}
int Account::getId()
{
	return id;
}
double Account::getBalance()
{
	return balance;
}
double Account::getAnnualInterestRate()
{
	return annualInterestRate;
}
void Account::setId(int newId)
{
	id = newId;
}
void Account::setBalance(double newBalance)
{
	balance = newBalance;
}
void Account::setAnnualInterestRate(double newRate)
{
	annualInterestRate = newRate;
}
double Account::getMonthlyInterestRate()
{
	return annualInterestRate / 12;
}
string Account::getName()
{
	return name;
}
vector<Transaction> Account::getTransactions()
{
	return transactions;
}
