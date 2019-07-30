/*
 * CheckingAccount.h
 *
 *  Created on: Apr 16, 2018
 *      Author: baraj
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_
#include "Account.h"
class CheckingAccount: public Account
{
private:
	double *transFeePtr;
public:
	CheckingAccount();
	CheckingAccount(double initialBalance, double fee);
	//Overwriting credit and debit
	void credit(double);
	void debit(double);
	virtual ~CheckingAccount();
};

#endif /* CHECKINGACCOUNT_H_ */
