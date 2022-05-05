//import_lib
#include <iostream>
#include <cstdlib>

//import_header
#include "random_value.h"
#include "check_value.h"
#include "high_scores.h"

int main() {
	
	//init_username
	char username[100];
	//init_message_for_game
	std::cout << "Hi! Enter your name, please:" << std::endl;
	//enter_username
	std::cin.getline(username, 100);
			
	//find_random_value
	std::cout << check_value() << std::endl;
	
	//save_values
	high_scores();
	//return_main
	return 0;
}