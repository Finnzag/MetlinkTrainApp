#pragma once
#include "Trip.h"

class PassengerTrain : public Trip
{
public:
	PassengerTrain();

private:
	std::string departureTime;
	bool cycleAllowed;
	std::string category;
	std::string status;

public:



	
};
