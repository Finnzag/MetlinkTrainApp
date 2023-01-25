#pragma once
#include <string>

enum TrainType{ PASSENGER, GOODS };

class Train
{
public:
	Train();

protected:
	TrainType type_;
	int trainNumber_;

public:
	void setTrainType(std::string type);
	void setTrainNumber(int number);

	TrainType getTrainType();
	int getTrainNumber();

	
};
