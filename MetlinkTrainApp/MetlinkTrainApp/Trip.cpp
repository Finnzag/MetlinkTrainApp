#include "Trip.h"

void Trip::setLine(std::string line)
{
	if (line == "HuttValley") { line_ = Line::HUTTVALLEY; }
	if (line == "Kapiti") { line_ = Line::KAPITI; }
	if (line == "Wairarapa") { line_ = Line::WAIRARAPA; }
	if (line == "Johnsonville") { line_ = Line::JOHNSONVILLE; }
}

void Trip::setEndPlace(std::string endPlace)
{
}

void Trip::setStartPlace(std::string startPlace)
{
}

void Trip::setDriver(std::string driver)
{
}

void Trip::setNumberOfCompartments(int numOfCompartments)
{
}

void Trip::setPlatformNumber(int platformNumber)
{
}

void Trip::setStartTime(std::string startTime)
{
}

void Trip::setEndTime(std::string endTime)
{
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
	return std::string();
}

std::string Trip::getEndPlace()
{
	return std::string();
}

std::string Trip::getDriver()
{
	return std::string();
}

int Trip::getNumberOfCompartments()
{
	return 0;
}

int Trip::getPlatformNumber()
{
	return 0;
}

std::string Trip::getStartTime()
{
	return std::string();
}

std::string Trip::getEndTime()
{
	return std::string();
}
