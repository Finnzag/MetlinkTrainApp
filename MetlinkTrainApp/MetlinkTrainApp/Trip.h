#pragma once
#include "Train.h"

enum Line{HUTTVALLEY, KAPITI};

class Trip : public Train
{
public:
	Trip();

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
	void setEndPlace();
	void setStartPlace();

};
