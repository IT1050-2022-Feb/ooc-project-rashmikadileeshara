//Payment class
#include "Passenger.h"

class Payment
{
private:
	char payId[5];
	char payCategory[20];
	double amountPaid;
	//Relationship
	Passenger * passen;

public:
	Payment();
	Payment(const char npayId[], const char npayCategory[], double namountPaid);
	void submitDetails();
	void checkDetails();
	~Payment();
};
