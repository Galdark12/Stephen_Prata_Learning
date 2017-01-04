#include <iostream>
#include <string>
#include <cstdlib>

struct car
{
	std::string producerName;
	int productionDate;
};

int main()
{
	std::cout << " Enter the number of cars in your colection! " << std::endl;
	int carsQuantity;
	std::cin >> carsQuantity;
	std::cin.ignore();

	car * carCollection = new car[carsQuantity];

	for (int i = 0; i < carsQuantity; ++i)
	{
		std::cout << "Please enter the producer of car number " << i+1 << "." << std::endl;
		getline(std::cin, carCollection[i].producerName);
		std::cin.clear();
		std::cout << "Please enter the production year" << std::endl;
		std::cin >> carCollection[i].productionDate;
		std::cin.ignore();
		std::cout << std::endl;
	}

	std::cout << "Here is your car collection: " << std::endl;

	for (int i = 0; i < carsQuantity; ++i)
	{
		std::cout << carCollection[i].producerName << "  " << carCollection[i].productionDate << std::endl;
	}

	system("pause");

	delete[]carCollection;
	return 0;
}