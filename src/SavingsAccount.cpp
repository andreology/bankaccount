/*
 * SavingsAccount.cpp
 *
 *  Created on: Apr 16, 2018
 *      Author: andreology
 */

#include "SavingsAccount.h"
#include <iostream>
#include <stdio.h>
using namespace std;
SavingsAccount :: SavingsAccount()
{
	// TODO Auto-generated constructor stub

	double* interestPtr = new double;
	interestRatePtr = interestPtr;
	*interestRatePtr = 0;
}
SavingsAccount :: SavingsAccount(double initialBal, double interestRate)
{
	// TODO Auto-generated constructor stub
	double* interestPtr = new double;
	interestRatePtr = interestPtr;
	*interestRatePtr = interestRate;
	setBalance(initialBal);
}
double SavingsAccount:: calculateInterest()
{
	double amount;
	amount = *getBalance() * *interestRatePtr;
	return amount;
}
string SavingsAccount:: toString()
{
	return  " Saving account " ;
}
SavingsAccount::~SavingsAccount()
{
	// TODO Auto-generated destructor stub
	double* gan  = NULL;
	if(interestRatePtr != NULL)
	{
		gan = interestRatePtr;
	delete gan;
	}
}

