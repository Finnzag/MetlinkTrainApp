#pragma once
#include "Trip.h"

class GoodsTrain : public Trip
{
public:
	GoodsTrain();

private:

	std::string goodsType;

public:
	void setGoodsType(std::string goods);

	std::string getGoodsType();
};
