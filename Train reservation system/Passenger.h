// Passenger class
#include "Account.h"
#include "Complaint.h"
#include "Payment.h"

class Passenger
{
private:
	char passid[5];
	char name[50];
	char address[100];
	int phoneNo;
	char email[30];

	//Realtionships
	Complaint * complaint[SIZE];
	Account * account;
	Reservation * reservation[SIZE];
	Payment * payment[SIZE];

public:
	Passenger();
	Passenger(const char npassid[], const char nname[], const char naddress[], int nphoneNo, const char nemail[] );
	void searchTrainShedule();
	void SearchTicketandSeatAvailability();
	~Passenger();
};
