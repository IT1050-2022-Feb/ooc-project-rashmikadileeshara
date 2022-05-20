#include <iostream>
#include <string.h>
#include "Account.h"
#include "Reservation.h"

Account::Account()
{

}

Account::Account(const char naccNo[], const char naccType[])
{

	strcpy(accNo, naccNo);
	strcpy(accType, naccType);
	reser = new reservation [SIZE];
}

void Account::createAccount()
{

}


void Account::checkAccountdetails()
{

}


Account::~Account()
{

}
