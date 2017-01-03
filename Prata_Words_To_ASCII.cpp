// Prata_Words_To_ASCII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

const int array_size = 20;

int main()
{
	using namespace std;
	char word[array_size];
	cout << "Enter the word u want to get ASCII: ";
	cin >> word;
	cout << "Here is your word transfered in ASCII: \n";

	int i = 0;

	while (word[i] != '\0')
	{
		cout << i + 1 << ". " << word[i] << "<==>" << int(word[i]) << endl;
		i++;
	}
	system("pause");
    return 0;
}

