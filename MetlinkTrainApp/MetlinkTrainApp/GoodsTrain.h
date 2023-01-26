#pragma once
#include "Trip.h"
#include "Train.h"

class GoodsTrain : public Trip
{
public:
	GoodsTrain(int number, std::string type) : Trip(number, type) {}

private:

	std::string goodsType_;

public:
	void setGoodsType(std::string goods);

	std::string getGoodsType();
};
