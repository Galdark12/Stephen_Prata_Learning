#include <iostream>
#include <string>
using namespace std;

struct bop
{
	string fullname;    
	string title;       
	string bopname;     
	int preference;     
};

int main()
{
	const int arrSize = 5;

	bop memberList[arrSize] =
	{
		{ "John Goldfish", "system analyst", "FISHER" },
		{ "Katherine Thomas", "junior programmer", "GREATKAT" },
		{ "Dave Stone", "senior programmer", "SPARKY" },
		{ "Brian Mill", "system administrator", "ROCKER" },
		{ "Alice Crawford", "webmaster", "BEAUTY" }
	};

	cout << "Benevolent Order of Programmers Report\n"
		"a. display by name\n"
		"b. display by title\n"
		"c. display by bopname\n"
		"d. display by preference\n"
		"q. quit\n"
		"\nEnter your choice: ";

	char choice = ' ';
	cin >> choice;

	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a':   for (int i = 0; i<arrSize; ++i)
			cout << memberList[i].fullname << endl;
			break;

		case 'b':   for (int i = 0; i<arrSize; ++i)
			cout << memberList[i].title << endl;
			break;

		case 'c':   for (int i = 0; i<arrSize; ++i)
			cout << memberList[i].bopname << endl;
			break;

		case 'd':   cout << "\nPlease, set your preference:\n"
			"0 = fullname\n"
			"1 = title\n"
			"2 = bopname\n";
			for (int i = 0; i<arrSize; ++i)
			{
				cout << "\nPlease, set your preference for "
					<< i + 1 << " memeber of BOP: ";
				cin >> memberList[i].preference;
			}

			for (int i = 0; i<arrSize; ++i)
			{
				if (memberList[i].preference == 0)
					cout << memberList[i].fullname << endl;
				else if (memberList[i].preference == 1)
					cout << memberList[i].title << endl;
				else if (memberList[i].preference == 2)
					cout << memberList[i].bopname << endl;
				else
				{
					cout << "\nThis is not possible choice.\n"
						"You should enter 0 or 1 or 2.\n"
						"Please, try type correct numbers next time.\n";
					break;
				}

			}
			break;

		default:    cout << "\nThis is not possible choice. Please, try again.\n";
		}
		cin.clear();
		while (cin.get() != '\n');
		cout << "\nEnter your next choice: ";
		cin >> choice;
	}
	cout << "\nBye!\n";
	return 0;
}
