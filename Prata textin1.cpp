#include <iostream>
#include <cstdlib>

int main()
{
	char charWeGet;
	int iterationCounter = 0;
	std::cout << " Enter the characters. To fonish press '=' " << std::endl;
	std::cin >> charWeGet;

	while (charWeGet != '=')
	{
		std::cout << charWeGet;
		iterationCounter++;
		std::cin >> charWeGet;
	}

	std::cout << "Congrat, program finished. The number of chars entered is " << iterationCounter << std::endl;

	system("pause");
	return 0;

}
