#pragma once
#include "Train.h"

enum Line{HUTTVALLEY, KAPITI, JOHNSONVILLE, WAIRARAPA};

class Trip : public Train
{
public:
	Trip(int number, std::string type) : Train(number, type) {}

protected:

	Line line_;
	std::string startPlace;
	std::string endPlace;
	std::string driver;
	int numberOfCompartments;
	int platformNumber;
	std::string startTime;
	std::string endTime;

public:

	// Function Prototypes
	void setLine(std::string line_);
	void setEndPlace(std::string endPlace_);
	void setStartPlace(std::string startPlace_);
	void setDriver(std::string driver_);
	void setNumberOfCompartments(int numOfCompartments_);
	void setPlatformNumber(int platformNumber_);
	void setStartTime(std::string startTime_);
	void setEndTime(std::string endTime_);

	std::string getLine();
	std::string getStartPlace();
	std::string getEndPlace();
	std::string getDriver();
	int getNumberOfCompartments();
	int getPlatformNumber();
	std::string getStartTime();
	std::string getEndTime();
};
