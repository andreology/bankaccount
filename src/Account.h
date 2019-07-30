/*
 * Account.h
 *
 *  Created on: Apr 16, 2018
 *      Author: andreology
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_
using namespace std;
#include <iostream>
class Account
{
private:
	double *balance;
public:
	Account();
	Account(double);
	void setBalance(double);
	virtual string toString();
	void credit(double&);
	void debit(double&);
	double* getBalance();
	virtual ~Account();
};

#endif /* ACCOUNT_H_ */
