#include "PassengerTrain.h"

void PassengerTrain::setDepartureTime(std::string time)
{
	departureTime_ = time;
}

void PassengerTrain::setCycleAllowed(bool isAllowed)
{
	cycleAllowed_ = isAllowed;
}

void PassengerTrain::setCategory(std::string category)
{
	category_ = category;
}

void PassengerTrain::setStatus(std::string status)
{
	status_ = status;
}

std::string PassengerTrain::getDepartureTime()
{
	return departureTime_;
}

std::string PassengerTrain::getCycleAllowed()
{
	switch (cycleAllowed_)
	{
	case 0:
		return "CycleNotAllowed";
	case 1:
		return "CycleAllowed";
	default:
		break;
	}
}

std::string PassengerTrain::getCategory()
{
	return category_;
}

std::string PassengerTrain::getStatus()
{
	return status_;
}
