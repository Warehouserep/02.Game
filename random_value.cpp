#pragma once
//import_lib
#include "random_value.h"

int random_value()
{
	//create+max_value_for_random_number
	const int max_value = 100;
	// use current time as seed for random generator
	std::srand(std::time(nullptr));
	//limit_for_random_value
	const int random_value = std::rand() % max_value;
	//export_rtandom_value
	return random_value;
}


