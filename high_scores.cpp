//import_libraries
#include <iostream>
#include <fstream>
#include <string>

//import_headers
#include "high_scores.h"

int high_scores() 
{
	//Init_dictionary
	char ENG_dict[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char eng_dict[] = "abcdefghijklmnopqrstuvwxyz";
	char RU_dict[] = "ÀÁÂÃÄİÅÆÇÛÈÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜÚŞß¨";
	char ru_dict[] = "aáâãäå¸æçûèêëìíîïğñòóôõö÷øùüúşÿ¸";
	char num_dict[] = "0123456789";
	char sim_dict[] = "!@#$%^&*()_+=-";
	
	//print_results
	const std::string high_scores_filename = "high_scores.txt";

	//ask_about_name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	//init_variables
	std::string user_name;
	//enter_variuables
	std::cin >> user_name;

	//get_the_last_high_score
	std::cout << "Enter your high score:" << std::endl;
	//init_high_score
	int attempts_count = 0;
	//enter_counts
	std::cin >> attempts_count;
	//check_on_bad_wrong
	if (std::cin.fail()) {
		//print_message
		std::cout << "Bad value!" << std::endl;
		//return_bad
		return -1;
	}

	// Write new high score to the records table
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		//check_file_corrupted
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << attempts_count;
		out_file << std::endl;
	} // end of score here just to mark end of the logic block of code

	//read_the_high_score_file_and_print_all_results
	{
		std::ifstream in_file{high_scores_filename};
		//check_file_corrupted
		if (!in_file.is_open()) {
			//print_message_corruped_files
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			//return_bad_result
			return -1;
		}

		//print_table_high_scores
		std::cout << "High scores table:" << std::endl;

		//init_user_name
		std::string username;
		//init_hight_scores
		int high_score = 0;
		//cycle_write_results
		while (true) {
			//read_the_username_first
			in_file >> username;
			//read_the_high_score_next
			in_file >> high_score;
			//ignore_the_end_of_line_symbol
			in_file.ignore();
			//check_file
			if (in_file.fail()) {
				//break_cycle_on_write
				break;
			}
			//print_the_information_to_the_screen
			std::cout << username << '\t' << high_score << std::endl;
		}
	}
	return 0;
}