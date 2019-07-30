/*
 * CheckingAccount.cpp
 *
 *  Created on: Apr 16, 2018
 *      Author: baraj
 */

#include "CheckingAccount.h"
#include <iostream>
using namespace std;
CheckingAccount::CheckingAccount()
{
	// TODO Auto-generated constructor stub
	double* feePtr = new double;
		transFeePtr = feePtr;
		*feePtr = 0;
		setBalance(0);
}
CheckingAccount::CheckingAccount(double initialBalance, double fee)
{
	//fee
	double* feePtr = new double;
	transFeePtr = feePtr;
	*feePtr = fee;
	setBalance(initialBalance);
}
	//Overwriting credit and debit
void CheckingAccount:: credit(double x)
{
	setBalance( x + *getBalance() - *transFeePtr);
}
void CheckingAccount:: debit(double x)
{

	if(*getBalance() >x)
			setBalance( *getBalance() -x);
		else
		{
			cout << "*******ERROR: Debit amount exceeded account balance. Account charged.*******\n";
			setBalance(*getBalance()- *transFeePtr);
		}
}
CheckingAccount::~CheckingAccount()
{
	// TODO Auto-generated destructor stub
	double* gan = NULL;
	if(transFeePtr != NULL)
	{
		gan = transFeePtr;
		delete gan;

	}
}

