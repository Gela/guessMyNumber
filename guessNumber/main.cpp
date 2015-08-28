#include <iostream>
#include <string>
#include <random>
#include <sstream>

#define EQUAL 0
#define LESS_THAN 1
#define GREATER_THAN 2

int generate_random_number()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(1, 1000);

	int generated_val = dist(mt);

	return generated_val;
}

int compare_values(int computer_generated, int user_generated)
{
	if (computer_generated == user_generated)
		return EQUAL;
	else if (computer_generated < user_generated)
		return LESS_THAN;
	else if (computer_generated > user_generated)
		return GREATER_THAN;
}


int main() {
	
	int guess_val;

	std::cout << "generating random value \n";

	int generated_val = generate_random_number();

	std::cout << "What do you think is the generated value?" << std::endl;

	std::cin >> guess_val;

	// Error handling not done yet

	switch(compare_values(guess_val, generated_val)) {

	case EQUAL:
		//add complexity here
		std::cout << "You guessed the correct value." << std::endl;
		break;

	case LESS_THAN:
		std::cout << "The computer guessed a value less than what you think." << std::endl;
		break;

	case GREATER_THAN:
		std::cout << "The computer guessed a value greater than what you think." << std::endl;
		break;
	}
	return 0;
}