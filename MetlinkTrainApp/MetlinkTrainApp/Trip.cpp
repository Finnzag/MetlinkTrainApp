#include "Trip.h"

void Trip::setLine(std::string line)
{
	if (line == "HuttValley") { line_ = Line::HUTTVALLEY; }
	if (line == "Kapiti") { line_ = Line::KAPITI; }
	if (line == "Wairarapa") { line_ = Line::WAIRARAPA; }
	if (line == "Johnsonville") { line_ = Line::JOHNSONVILLE; }
}

void Trip::setEndPlace(std::string endPlace_)
{
	endPlace = endPlace_;
}

void Trip::setStartPlace(std::string startPlace_)
{
	startPlace = startPlace_;
}

void Trip::setDriver(std::string driver_)
{
	driver = driver_;
}

void Trip::setNumberOfCompartments(int numOfCompartments_)
{
	numberOfCompartments = numOfCompartments_;
}

void Trip::setPlatformNumber(int platformNumber_)
{
	platformNumber = platformNumber_;
}

void Trip::setStartTime(std::string startTime_)
{
	startTime = startTime_;
}

void Trip::setEndTime(std::string endTime_)
{
	endTime = endTime_;
}

std::string Trip::getLine()
{
	if (line_ == Line::HUTTVALLEY) { return "HuttValley"; }
	if (line_ == Line::KAPITI) { return "Kapiti"; }
	if (line_ == Line::WAIRARAPA) { return "Wairarapa"; }
	if (line_ == Line::JOHNSONVILLE) { return "Johnsonville"; }
}

std::string Trip::getStartPlace()
{
	return startPlace;
}

std::string Trip::getEndPlace()
{
	return endPlace;
}

std::string Trip::getDriver()
{
	return driver;
}

int Trip::getNumberOfCompartments()
{
	return numberOfCompartments;
}

int Trip::getPlatformNumber()
{
	return platformNumber;
}

std::string Trip::getStartTime()
{
	return startTime;
}

std::string Trip::getEndTime()
{
	return endTime;
}
