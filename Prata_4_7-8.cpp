// Prata_4_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


struct pizza_example
{
	string company_name;
	double diameter;
	double pizza_weight;
};


int main()
{
	pizza_example *test_struct = new pizza_example;

	cout << "Please enter diameter: " << endl;
	cin >> test_struct->diameter; 
	cin.ignore();

	cout << "Please enter company name: " << endl;
	getline(cin, test_struct->company_name);

	cout << "Please enter pizza weight: " << endl;
	cin >> test_struct->pizza_weight;

	

	/*cout << "Please enter company name: " << endl;
	getline(cin, test_struct.company_name);

	cout << "Please enter pizza diameter: " << endl;
	cin >> test_struct.diameter;

	cout << "Please enter pizza weight: " << endl;
	cin >> test_struct.pizza_weight; */

	cout << "*******************************" << endl;
	cout << "Name: " << test_struct->company_name << endl;
	cout << "Diameter: " << test_struct->diameter << endl;
	cout << "Weight: " << test_struct->pizza_weight << endl;
	cout << "*******************************" << endl;
	delete test_struct;

	system("pause");
	

    return 0;
}

