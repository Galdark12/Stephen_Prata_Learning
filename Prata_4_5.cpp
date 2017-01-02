// Prata_4_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

struct candyBar
{
	string candys_name;
	double candys_weight;
	int candys_energy;
};

int main()
{
	candyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};
    
	cout << "Candys Name: " << snack.candys_name << endl;
	cout << "Candys Weight: " << snack.candys_weight << endl;
	cout << "Candys Energy: " << snack.candys_energy << endl;

	system("pause");
    return 0;
}

