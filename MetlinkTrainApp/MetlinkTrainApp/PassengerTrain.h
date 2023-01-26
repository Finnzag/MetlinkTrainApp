#pragma once
#include "Trip.h"

class PassengerTrain : public Trip
{
public:
	PassengerTrain(int number, std::string type) : Trip(number, type) {};

private:
	std::string departureTime_;
	bool cycleAllowed_;
	std::string category_;
	std::string status_;

public:

	void setDepartureTime(std::string time);
	void setCycleAllowed(bool isAllowed);
	void setCategory(std::string category);
	void setStatus(std::string status);

	std::string getDepartureTime();
	std::string getCycleAllowed();
	std::string getCategory();
	std::string getStatus();



	
};
