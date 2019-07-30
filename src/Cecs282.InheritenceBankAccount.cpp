//Andre Barajas
//CECS 282
//Spring 2018
//Circular Linked Lists Project
//This program creates an account base class and two derived classes that depend on the base class.
#include "SavingsAccount.h"
#include "Account.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{

	//int* ptr[10];
	//for()
	//ptr[i]->funa();
		cout << "Hello World" << endl; // prints Hello World
		SavingsAccount ello = SavingsAccount(4.0, 1.0);
		CheckingAccount chap = CheckingAccount(20.0, .2);

		cout <<  *ello.getBalance() << endl;
		cout <<  "ello Interest: " << ello.calculateInterest() << endl;

		cout <<  "chap: " << *chap.getBalance() << endl;
		cout << " new toString: ";
		 chap.credit(12.0);
		 chap.toString();
		 ello.toString();
			cout <<  "chap: " << *chap.getBalance() << endl;

		 chap.debit(1.0);
			cout <<  "chap: " << *chap.getBalance() << endl;



		cout <<  *ello.getBalance() << endl;
		cout <<  "interest: " << ello.calculateInterest() << endl;
	return 0;
}
