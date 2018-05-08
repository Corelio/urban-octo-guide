#include "PairOfDice.h"

std::random_device rd;
static std::default_random_engine generator(rd());

PairOfDice::PairOfDice()
{
}

int PairOfDice::Roll()
{
	std::uniform_int_distribution<int> distribution(1, 6);
	int dice1 = distribution(generator);
	int dice2 = distribution(generator);
	//keep track of how many doubles and reset if it reaches more than 3. 
	//Once the player hits 3 doubles in a row, it must be go to jail and that counter is reseted
	numConsecutiveDoubles = (dice1 != dice2 || numConsecutiveDoubles == 3) ? 0 : numConsecutiveDoubles + 1;

	return dice1 + dice2;
}

bool PairOfDice::isGoTOJail() const
{
	return (numConsecutiveDoubles == 3);
}
