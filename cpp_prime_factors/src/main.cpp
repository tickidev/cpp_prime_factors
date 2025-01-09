#include <iostream>

int main()
{

	char name;
	int number = 0;
	bool isPlay = true;
	char userChoice;

	std::cout << "Please enter your name: ";
	std::cin >> name;

	std::cout << "Hello, " << name << "! Welcome to the Prime Factorization Calculator.\n";


	do
	{
		std::cout << "Please enter a number to find its prime factors: ";
		std::cin >> number;

		std::cout << "The prime factors of " << number  << " are: ";

		std::cout << "Would you like to calculate the prime factors of another number? (yes/no): ";
		std::cin >> userChoice;

		if (userChoice == 'y' || userChoice == 'yes')
		{
			isPlay = true;
		} 
		else if (userChoice == 'n' || userChoice == 'no')
		{
			isPlay = false;
		}
		else
		{
			std::cout << "Invalid choice.";
			isPlay = false;
		}
	} while (isPlay);

	std::cout << "Thank you for using the Prime Factorization Calculator!Goodbye!";
}