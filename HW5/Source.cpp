#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Account.h"
#include "NewVector.h"

using namespace std;

// EX05_01
template <typename T>
void linearSearch( T list[], T key,int arraySize)
{
	bool t = false;
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
		{
			cout << "The key is in place number " << i+1 << " in the list." << endl;
			t = true;
		}
	}
	if (t == false)
	{
		cout << "Sorry, the key is not in the list." << endl;
	}
}

//EX05_02
template <typename T>
bool isSorted(const T list[], int size)
{
	bool t;
	int count = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (list[i] <= list[i + 1])
			count++;
	}

	if (count == size-1)
		t = true;
	else
		t = false;

	return t;
}


//EX05_04
template<typename T>
void shuffle(vector<T>& v)
{
	vector<T> temp=v;
	v.clear();
	srand((unsigned)time(NULL));
	int r;
	
	int count = temp.size();
	while (count!=0)
	{
		r = rand() % temp.size();
		v.push_back(temp[r]);
		temp[r] = temp[temp.size() - 1];
		temp.pop_back();
		count--;
	}
	
}


int main()
{
	//EX05_01
	int list1[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	double list2[] = { 1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2 };
	string list3[] = { "Hello", "my", "name", "is", "Gandalf"};
	string key = "Gandalf";
	linearSearch(list1, 4, 8);
	linearSearch(list2, 2.2, 8);
	linearSearch(list3, key, 5);

	//EX05_02
	
	 string sorted1[] = { "A","B","C" };
	 string sorted2[] = { "A", "C", "B" };
	cout<< isSorted(list1, 8)<< endl;  //should give 0
	cout << isSorted(list2,8 ) << endl;  //should give 1
	cout << isSorted(sorted1, 3) << endl;	//should give 1
	cout << isSorted(sorted2, 3) << endl; //should give 0
	
	//EX05_03


	//NewVector<int> v1;
	//v1.push_back(3);       There is an error in the NewVector class that I can't figure out. 
	

	//EX05_04
	vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	shuffle(v);
	for (unsigned int i = 0; i < v.size();i++)
	{ 
		cout << v[i] << " ";
	}
	cout << endl;

	//EX05_05
	Account account("George", 1122, 1000);
	account.setAnnualInterestRate(0.015);
	account.deposit(30, "First check.");
	account.deposit(40, "Sold my old phone.");
	account.deposit(50, "Got a raise.");
	account.withdraw(5, "Starbucks.");
	account.withdraw(4, "Tacos.");
	account.withdraw(2, "More tacos.");
	cout << "Name: " << account.getName() << endl;
	cout << "Interest Rate: " << account.getAnnualInterestRate() << endl;
	vector<Transaction> transaction = account.getTransactions();
	for (unsigned int i = 0; i < transaction.size(); i++)
	{
		cout << "Transactions: " << i+1<< endl;
		cout << "Type: " << transaction[i].getType() << endl;
		cout << "Amount: " << transaction[i].getAmount() << endl;
		cout << "Balance: " << transaction[i].getBalance() << endl;
		cout << "Description: " << transaction[i].getDescription() << endl;
	}



	
	

	return 0;
}