#include <iostream>
using namespace std;
class BankAccount
{
	string HolderName;
	int AccountNumber;
	float Balance;
	float BalanceLimit;
	int* Transactions;
public:
	int NoofTransactions;
	int MaxTransactions;
	BankAccount(string name,int AccNo);
	void Print();
	void withDraw(float amount);
	void deposit(float amount);
	void  increaseTranCapacity();
	~BankAccount();

};