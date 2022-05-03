//import_lib
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "build/random_value.h"

int random_value() {
	//create+max_value_for_random_number
	const int max_value = 100;
	// use current time as seed for random generator
	std::srand(std::time(nullptr));
	//limit_for)random_value
	const int random_value = std::rand() % 100;
	//enter_random_value
	std::cout << random_value << std::endl;

	return 0;
}

int main() {
	return random_value();
}