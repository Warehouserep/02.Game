#pragma once
//import_lib
#include <iostream>
#include "check_value.h"
#include "random_value.h"

//main_function
int check_value() 
{
	//init_target_value
	const int target_value = random_value();
	//inint_current_vcalue
	int current_value = 0;
	//result_win
	bool not_win = true;
	//inint_atemptts
	int attempts = 0;
	
	//enter_answer
	std::cout << "Enter your guess:" << std::endl;
	//cickle_tries
	do {
		//cycle_attempts
		attempts += 1;

		//enter_your_answer
		std::cin >> current_value;
		
		//check_current_value_bigger
		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		//check_current_value_small
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		//check_current = target_value
		else {
			std::cout << "you win!" << std::endl;
			std::cout << "attempts: " << attempts << std::endl;
			break;
		}
	} while(true);

	return 0;
}