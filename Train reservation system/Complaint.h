//Complaint class
#include "Passenger.h"

class Complaint
{
private:
	char complaintNo[5];
	char complaint[100];
	//Relationship
	Passenger * passenger;

public:
	Complaint();
	Complaint(const char ncomplaintNo[], const char ncomplaint[]);
	void sendComplaint();
	void checkComplaint();
	~Complaint();
};
