/*
 * SavingsAccount.h
 *
 *  Created on: Apr 16, 2018
 *      Author: andreology
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_
#include "Account.h"
using namespace std;
class SavingsAccount : public Account
{
private:
	double *interestRatePtr;
public:
	SavingsAccount();
	SavingsAccount(double initialBal, double intererstRate);
	string toString();
	double calculateInterest();
	virtual ~SavingsAccount();
};

#endif /* SAVINGSACCOUNT_H_ */
