#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
#include "Date.h"

using namespace std;

class Transaction
{
public:
	Transaction(char, double, double, string);
	char getType();
	double getAmount();
	double getBalance();
	string getDescription();

private:
	
	//Date date;
	char type;
	double amount;
	double balance;
	string description;
};
#endif