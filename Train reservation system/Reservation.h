//Reservation class
#include "Payment.h"
#include "Passenger.h"

class Reservation
{
private:
	char reservationId[5];
	char category[20];
	//Relationship
	Passenger * pass;
	Payment * pay;


public:
	Reservation();
	Reservation(const char nreservationId[], const char ncategory[]);
	void makeReservation();
	void makeCancellation();
	~Reservation();
};
