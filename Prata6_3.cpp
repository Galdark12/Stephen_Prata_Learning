#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	using std::endl;
	using std::cout;
	using std::cin;
	using std::string;

	const int arrSize = 5;
	int sz = arrSize - 1;
	cout << "Please enter one of the following choices:\n"
		"c) carnivore\n"
		"p) pianist\n"
		"t) tree\n"
		"g) game\n\n";

	string phrase[] = { "\nTiger is a carnivore.\n", "\nChopin was a great pianist.\n", "\nMaple is a tree.\n", "\nDiablo is a revolutionary game\n" };
	char choice[arrSize] = { 'c', 'p', 't', 'g', '0' };
	cin >> choice[sz];
	while (true)
	{
		for (int i = 0; i<sz; ++i)
			if (choice[sz] == choice[i])
			{
				cout << phrase[i];
				return 0;
			}
		cout << "\nThis is not possible choice. Please, try again: ";
		cin.clear();
		while (cin.get() != '\n');
		cin >> choice[sz];
	}
	system("pause");
	return 0;
}