#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// takes user input fron cin stream and stores it in a string. wraps string
// in stringstream and converts each number into an integer until it hits
// a non integer. Puts values into an integer vector.
void get_user_input(std::vector <int> &vector1)
{
	std::string line;
	int integer;
	
	std::getline(std::cin, line);
	std::stringstream ss(line);
	while (ss >> integer)
	{
		vector1.push_back (integer);
	}
	
}

// compares each value in the two vectors returning a true if there are any duplicate values found
bool compare_vectors(std::vector <int> vector1, std::vector <int> vector2)
{
	for (int i = 0; i < vector1.size(); ++i)
	{
		for (int j = 0; j < vector2.size(); ++j)
		{
			if (vector1[i] == vector2[j])
			{
				return true;
			}
		}
	
	}
	return false;
}


int main ()
{
	std::vector <int> first_number_set;
	std::vector <int> second_number_set;
	bool are_duplicates = false;

	std::cout << "Enter a set of numbers with a space in between each number in the set: ";
	get_user_input(first_number_set); 
	
	std::cout << "Enter a second set of numbers with a space in between each number in the set: ";
	get_user_input(second_number_set);

	are_duplicates = compare_vectors(first_number_set, second_number_set);

	if (are_duplicates == true)
	{
		std::cout << "There are duplicate values present.";
	}
	else
	{
		std::cout << "No duplicate values present.";
	}
}
