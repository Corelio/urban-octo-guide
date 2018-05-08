//
// Author Marco Corsini
//Dice class for monopoly game

#pragma once
#include <random>
class PairOfDice
{
public:
	PairOfDice();
	int Roll();
	bool isGoTOJail() const;

private:
	int numConsecutiveDoubles{ 0 };

};

