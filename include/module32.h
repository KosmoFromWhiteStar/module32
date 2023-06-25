

#pragma once

#include <iostream>
#include "../include/nlohmann/json.hpp"
#include <fstream>
#include <assert.h>


void ex2()
{
	std::ifstream file("../films.json");
	if (!file.is_open())
	{
		std::cerr << "Dont open" << std::endl;
	}
	assert(file.is_open());

	std::string str;
	nlohmann::json dic;
	file >> dic;
	std::cout << "Input name" << std::endl;
	std::string name = "Keanu Reeves";
	//std::cin >> name;

	std::map<std::string, std::string> actors_map;

	int c = 0;
	for (auto i = dic.begin(); i != dic.end(); i++)
	{
		for (auto it = dic[c]["args"]["actors"].begin(); it != dic[c]["args"]["actors"].end(); it++)
		{

			if (it.value() == name) {
				actors_map.insert(std::make_pair(dic[c]["name"], it.key()));
			}
		}
		c++;
	}

	std::cout << name << " playd role" << std::endl;
	for (std::map<std::string, std::string>::iterator it = actors_map.begin();
		it != actors_map.end(); it++)
	{
		std::cout << "In " << it->first << ": " << it->second << std::endl;
	}


}


// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
