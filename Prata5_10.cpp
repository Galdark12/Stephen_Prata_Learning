#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << " Please enter the number of rows and coloums to fill with symbols! " << std::endl;
	int rows;
	std::cin >> rows;

	while (true)
	{
		if (rows > 0)
		{
			std::cout << " Alright, now we should fill our array with some symbols." << std::endl;
			break;
		}
		else
		{
			std::cout << "Please enter any positive number" << std::endl;
			std::cin >> rows;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		
		for (int j = 0; j < rows; ++j)
		{
			std::cout << ".";
		}

		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "\b";
		}
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	system("pause");
	return 0;

}