// Prata_5_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	using namespace std;
	int  sold_value[12];
	string month_array[12] = { "1","2","3","4","5","6","7","8","9","10","11","12" };
	int sum = 0;

	for (int point = 0 ; point < 12; point++)
	{
		cout << "Enter the number of books sold in " << month_array[point] << " month.";
		cin >> sold_value[point];
		sum = sum + sold_value[point];
	
	}

	cout << "The total number of sold books: " << sum;
    return 0;
}

