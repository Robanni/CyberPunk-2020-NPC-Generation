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
// ролит число из диапазона от min до range
{
	if (range == 0)return 0;
	int value = std::rand() % (range + 1 - min) + min;

	return value;
}
