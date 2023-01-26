#include "Train.h"

Train::Train(int trainNumber, std::string trainType)
{
	trainNumber_ = trainNumber;

	if (trainType == "Goods")
	{
		type_ = TrainType::GOODS;
	}
	else if (trainType == "Passenger")
	{
		type_ = TrainType::PASSENGER;
	}
}

void Train::setTrainType(std::string type)
{
	if (type == "Goods")
	{
		type_ = TrainType::GOODS;
	}
	else if (type == "Passenger")
	{
		type_ = TrainType::PASSENGER;
	}
}

void Train::setTrainNumber(int number)
{
	trainNumber_ = number;
}

TrainType Train::getTrainType()
{
	return type_;
}

int Train::getTrainNumber()
{
	return trainNumber_;
}
