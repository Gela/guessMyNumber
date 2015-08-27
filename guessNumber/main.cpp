#include <iostream>
#include <string>
#include <random>

int generate_random_number()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(1, 1000);

	int generated_val = dist(mt);

	return generated_val;
}

bool compare_values(int computer_generated, int user_generated)
{
	if (computer_generated == user_generated)
		return true;
	return false;
}

int main() {
	
	int guess_val;

	std::cout << "generating random value \n";

	int generated_val = generate_random_number();

	std::cout << "What do you think is the generated value?" << std::endl;

	std::cin >> guess_val;

	// Improved this part to keep giving hint until the user gets it right
	// Error handling not done yet
	bool result = compare_values(guess_val, generated_val);

	switch(result) {

	case 0:
		std::cout << "You did not guess the correct value." << std::endl;
		break;

	case 1:
		std::cout << "You guessed the correct value." << std::endl;
		break;
	}

	return 0;
}