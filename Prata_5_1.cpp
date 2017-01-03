// Prata_5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int start_point, finish_point, iteration_number;
	cout << "Enter first point of 'plusing' \n";
	cin >> start_point;
	cout << "Enter last point of 'plusing' \n";
	cin >> finish_point;
	iteration_number = finish_point - start_point;

	int plusing_sum = 0;
	for (int i = 0; i <= iteration_number; i++)
	{
		plusing_sum = plusing_sum + start_point + i;
	}

	cout << "The sum of numbers between " << start_point << " and " << finish_point << " is: " << plusing_sum << "\n";
	system("pause");
    return 0;
}

