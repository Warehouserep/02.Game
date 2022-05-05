//import_lib
#include <iostream>

//import_header
#include "random_value.h"
#include "check_value.h"

int main() {

	//init_user_name
	char user_name;
	//init_message_for_game
	std::cout << "Hi! Enter your name, please:" << std::endl;
	//enter_user_name
	std::cin >> user_name;
	//
	std::cout << random_value() << std::endl;
	//
	std::cout << check_value() << std::endl;
	//
	return 0;
}