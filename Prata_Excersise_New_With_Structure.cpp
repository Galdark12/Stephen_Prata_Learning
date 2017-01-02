// Prata_Excersise_New_With_Structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

// Creating test structure ---> "new_test_struct"
struct new_test_struct
{
	char vect_for_name[33];
	double price;
	int amount;
};


int main()
{
	using namespace std;
	new_test_struct * aim = new new_test_struct;
	cout << "Please insert structure element name \n";
	cin >> (*aim).vect_for_name;
	cout << "Please insert structure element price \n";
	cin >> (*aim).price;
	cout << "Please insert amount of structure elemets u need \n";
	cin >> (*aim).amount;
	cout << "Now u see all data u inserted ";
	cout << "\n1.name: '" << (*aim).vect_for_name << "'\n2.price: '" << (*aim).price << "'\n3.amount: '" << (*aim).amount;
	delete aim;  //deleting *aim to clean memory for next usage;
	cout << "'\nInsert something to finish off \n";
	system("pause");

    return 0;
}

