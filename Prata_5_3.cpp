// Prata_5_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int sum = 0;
	while (x != 0)
	{
		cout << "Enter the number ";
		cin >> x;
		sum = sum + x;
		if (x != 0)
			cout << "Here the sum: " << sum << endl;
		else
			cout << "Finally you enter '0' to finish it off.";
	}
	cin.get();
    return 0;
}

