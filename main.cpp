#include <iostream>
#include <string>
#include "Q1_181195.h"
using namespace std;
int main()
{
	BankAccount myAccount("John Doe",549002);
	myAccount.Print();
	myAccount.withDraw(2000);
	myAccount.deposit(250000);
	myAccount.deposit(50000);
	myAccount.Print();
	myAccount.deposit(50000);
	myAccount.deposit(50000);
	myAccount.deposit(5000);
	myAccount.withDraw(2000);
	myAccount.withDraw(20000);
	myAccount.withDraw(2000);
	myAccount.withDraw(20000);
	myAccount.withDraw(20000);
	myAccount.deposit(5000);
	myAccount.deposit(5000);
	myAccount.Print();
	system("pause");
}