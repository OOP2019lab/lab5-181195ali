#include <iostream>
#include <string>
#include "Q1_181195.h"
using namespace std;
BankAccount :: BankAccount(string name,int AccNo)// Constructor with parameters
{
	NoofTransactions = 0;
	MaxTransactions = 10;
	HolderName = name;
	AccountNumber = AccNo;
	Transactions = new int[MaxTransactions];
	for(int i=0; i<MaxTransactions ; i++)
		Transactions[i] = 0;
	Balance =0;
	BalanceLimit = 200000;
}
void BankAccount :: Print()// Prints all the account info of the user
{
	cout<<"Account holders name: "<<HolderName<<endl;
	cout<<"Account number: "<<AccountNumber<<endl;
	cout<<"Balance: "<<Balance<<endl;
	cout<<"Total number of Transactions: "<<NoofTransactions<<endl;
	for(int i=0 ; Transactions[i] != 0; i++)
		cout<<Transactions[i]<<" "<<endl;
	cout<<endl;
}
void BankAccount :: withDraw(float amount)// This withdraws the amount entered from the bank if the amount is available 
{
	if(Balance >= amount)
	{	
		if(NoofTransactions >= MaxTransactions)
			increaseTranCapacity();
		Transactions[NoofTransactions] = -amount;
		NoofTransactions++;
		Balance = Balance - amount;
		cout<<"Transaction Successful"<<endl;
	}
	else
		cout<<"Unsuccessful Transactions: Insufficient Balance"<<endl;

}
void BankAccount :: deposit(float amount)// This deposits the amount entered from the bank if the limit is reached
{
	if(amount + Balance <= BalanceLimit)
	{
		if(NoofTransactions >= MaxTransactions)
			increaseTranCapacity();
		Transactions[NoofTransactions] = amount;
		NoofTransactions++;
		Balance = Balance + amount;
		cout<<"Transaction Successful"<<endl;
	}
	else
		cout<<"Unsuccessful Transactions: Limit exceeded";

}
BankAccount :: ~BankAccount()// The destructor is invoked here
{
	delete[] Transactions;
}
void BankAccount :: increaseTranCapacity()// This increases size of the Transactions array 
{
	int* temp = new int[NoofTransactions*2],*temp2;
	for(int i=0; i<NoofTransactions*2 ; i++)
		temp[i] = 0;
	for(int i=0; i<NoofTransactions ; i++)
		temp[i] = Transactions[i];
	temp2 = Transactions;
	Transactions = temp;
	delete[] temp2;
}


