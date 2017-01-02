// Prata_4_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{

		string first_name, last_name;
		char grade;
		int age;

		cout << "Enter your first name \n";
		getline(cin, first_name);

		cout << "Enter your last name \n";
		getline(cin, last_name);

		cout << "Enter the grade u desire \n";
		cin >> grade;
		grade++;

		cout << "Enter your age \n";
		cin >> age;

		cout << "1. Name: " << first_name << " " << last_name << endl;
		cout << "2. Grade: " << grade << endl;
		cout << "3. Age: " << age << endl;

		system("pause");
		return 0;
	}

