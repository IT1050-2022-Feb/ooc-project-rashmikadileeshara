// Account class
#include "Passenger.h"
#include "Reservation.h"

class Account
{
private:
	char accNo[5];
	char accType[20];
	//Realtionships
	Passenger * pas;
	Reservation * reser [SIZE];

public:
	Account();
	Account(const char naccNo[], const char naccType[]);
	void createAccount();
	void checkAccountdetails();
	~Account();
};
