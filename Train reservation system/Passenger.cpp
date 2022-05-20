#include <iostream>
#include <string.h>
#include "Passenger.h"
using namespace std;


Passenger::Passenger()
{

}

Passenger::Passenger(const char npassid[], const char nname[], const char naddress[], int nphoneNo, const char nemail[])
{
	strcpy(passid, npassid);
	strcpy(name, nname);
	strcpy(address, naddress);
	phoneNo = nphoneNo;
	strcpy(email, nemail);
}

void Passenger::searchTrainShedule()
{

}

void Passenger::SearchTicketandSeatAvailability()
{

}


Passenger::~Passenger()
{

}

