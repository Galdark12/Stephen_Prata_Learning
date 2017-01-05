#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

int main()
{
	std::string textIn;
	getline(std::cin, textIn);
	int stringSize = textIn.size;

	char buffer;

	for (int i = 0; i < stringSize; ++i)
	{
		buffer = textIn[i];

		if (buffer != '@')
		{
			if (isspace(buffer) || ispunct(buffer))
			{
				std::cout << buffer;
			}
			else if (isdigit(buffer))
			{
				std::cout << " ";
			}
			else if (isalpha(buffer))
			{
				islower(buffer) ? std::cout << (char)toupper(buffer) : std::cout << (char)tolower(buffer);
			}
			else
				std::cout << buffer;
		}
		else
		{
			std::cout << "";
			break;
		}
	}

	system("pause");
	return 0;
}