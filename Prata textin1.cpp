#include <iostream>
#include <cstdlib>

// Modified with cin.get() function placed in istream class;
// cin.get() detect whitespaces and count them as 1 symbol;
int main()
{
	char charWeGet;
	int iterationCounter = 0;
	std::cout << " Enter the characters. To fonish press '=' " << std::endl;
	std::cin.get(charWeGet);

	while (charWeGet != '=')
	{
		std::cout << charWeGet;
		iterationCounter++;
		std::cin.get(charWeGet);
	}

	std::cout << std::endl;
	std::cout << " Congrat, program finished. The number of chars entered is " << iterationCounter << std::endl;

	system("pause");
	return 0;

}
