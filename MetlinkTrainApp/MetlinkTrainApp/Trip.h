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

	void setLine(std::string line);
	void setEndPlace(std::string endPlace);
	void setStartPlace(std::string startPlace);
	void setDriver(std::string driver);
	void setNumberOfCompartments(int numOfCompartments);
	void setPlatformNumber(int platformNumber);
	void setStartTime(std::string startTime);
	void setEndTime(std::string endTime);

	std::string getLine();
	std::string getStartPlace();
	std::string getEndPlace();
	std::string getDriver();
	int getNumberOfCompartments();
	int getPlatformNumber();
	std::string getStartTime();
	std::string getEndTime();
};
