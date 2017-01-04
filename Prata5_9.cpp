#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	int counter = 0;
	std::string insertionLine;
	std::string finishLine = "done";
	
	std::cout << "Enter some words, use 'Enter' to put new word. \n" << "Write 'done' to finilize writing."
		<< std::endl;

	getline(std::cin, insertionLine);

	while (insertionLine != finishLine)
	{
		++counter;
		getline(std::cin, insertionLine);

	}

	std::cout << "You entered " << counter << " words before end." << std::endl;
	system("pause");
	return 0;	

}