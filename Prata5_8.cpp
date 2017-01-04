#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
	char insertedWords[30];
	
	std::cout << " Enter some words. To finsh just type 'done'." << std::endl;
	
	int i = 0;
	std::cin >> insertedWords;
	while (strcmp(insertedWords, "done"))
	{
		std::cin >> insertedWords;
		++i;
	}

	std::cout << " You Entered " << i << " words before 'done' ";

	system("pause");
	return 0;
}