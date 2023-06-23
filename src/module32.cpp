// module32.cpp: определяет точку входа для приложения.
//

#include "../include/module32.h"
#include "../include/nlohmann/json.hpp"

int main()
{
	std::ifstream file("films.json");
	if (!file.is_open())
	{
		std::cerr << "Dont open" << std::endl;
	}
	nlohmann::json dic;
	file >> dic;
	std::cout << "Here";
	
	return 0;
}
