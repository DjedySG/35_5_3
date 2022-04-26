// CMakeProject2.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>
#include "CMakeProject2.h"

struct Record
{
	std::string name;
	std::string family;
	int age;
	bool married;
};

int main()
{
	Record record;
	std::cin >> record.name >> record.family >> record.age >> record.married;
	std::ofstream file("record.json");
	nlohmann::json dict;
	dict["name"] = record.name;
	dict["family"] = record.family;
	dict["age"] = record.age;
	dict["married"] = record.married;
	file << dict;
	nlohmann::json dict_second = {
		{"name", record.name},
		{"family", record.family},
		{"age", record.age},
		{"married", record.married}
	};
	file << std::endl << dict_second;
	file.close();

	std::ifstream file_two("record.json");
	nlohmann::json dict_third;
	file_two >> dict_third;
	std::string name = dict_third["name"];
	std::cout << name;
	return 0;
}
