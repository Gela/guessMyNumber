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

int main() {
	
	int guess_val;

	std::cout << "generating random value \n";

	int generated_val = generate_random_number();

	std::cout << "What do you think is the generated value?" << std::endl;

	std::cin >> guess_val;

	// Improved this part to keep giving hint until the user gets it right
	// Error handling not done yet
	if (guess_val != generated_val)
	{
		std::cout << "You guessed " << guess_val << "but the computer chose " << generated_val << std::endl;
	}

	return 0;
}