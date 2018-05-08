//
//

#include <iostream>
#include "PairOfDice.h"

int main()
{
	std::cout << "hi" << std::endl;

	PairOfDice pd;

	int timesInJail{ 0 };
	int numberRuns{ 1000 };

	for (int i = 0; i < numberRuns; i++) {
		system("cls");
		std::cout << pd.Roll() << std::endl;
		if (pd.isGoTOJail()) {
			std::cout << "got to jail !!! You run the dice " << i << " times" << std::endl;
			timesInJail++;
			system("pause");
		}
	}
	
	system("cls");
	std::cout << "you toss the dices " << numberRuns << " times and went to jail " << timesInJail << " times" << std::endl;

	system("pause");

}