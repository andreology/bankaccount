	/*
	 * Account.cpp
	 *
	 *  Created on: Apr 16, 2018
	 *      Author: andreology
	 */

	#include "Account.h"
	#include <iostream>
	using namespace std;
	#include <string>

	Account :: Account ()
	{
		double* balPtr = new double;
			balance= balPtr;
			*balPtr = 0;
	}
	Account::Account(double initialBalance)
	{
		// TODO Auto-generated constructor stub
		double* balPtr = new double;
		balance= balPtr;
		*balPtr = 0;
		if (initialBalance > 0)
		*balPtr =  initialBalance;
		else
		cout << "******ERROR: Not a valid input, balance set to 0.******\n";
	}
	void Account:: setBalance(double amt)
	{

		*balance = amt;
	}
	void Account :: credit(double& surplus)
	{
		*balance= surplus + *balance;
	}
	void Account :: debit(double& defecit)
	{
		if(*balance >defecit)
			*balance= *balance -defecit;
		else
			cout << "*******ERROR: Debit amount exceeded account balance. Balance remains.*******\n";
	}
	double* Account :: getBalance()
	{
		return balance;
	}
	string Account:: toString()
	{

		return " Account Balance: "  ;
	}
	Account::~Account()
	{
		// TODO Auto-generated destructor stub
		double* gan  = NULL;
		if(balance!=NULL)
		{
			gan = balance;
			delete(gan);
		}
	}

