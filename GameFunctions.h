#pragma once

#include "Includes.h"

int rollDice(int numberOfFaces)
//тупо ролим дайс с указанным колличеством граней
{
	int value = std::rand() % numberOfFaces + 1;

	if(numberOfFaces==10 && value==10) value += std::rand() % numberOfFaces + 1;

	return value;
}

int rollRange(int min, int range)
// ролит число из диапазона до range не включая и прибавляет к нему min
{
	if (range == 0)return 0;
	int value = std::rand() % range + min;

	return value;
}
