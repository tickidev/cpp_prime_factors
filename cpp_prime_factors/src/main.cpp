#include <iostream>
#include <string>

void findPrimeFactors(int num)
{
	// While the number is divisible by 2, repeatedly divide it by 2
	// This handles the case where 2 is a prime factor of the number
	while (num % 2 == 0)
	{
		std::cout << 2 << " ";		// Output 2 as one of the prime factors
		num /= 2;		// Divide the number by 2 and update it
	}

	// Now, for odd numbers starting from 3, check if they are factors of 'num'
	// We use 'i * i <= num' to limit the checking up to the square root of 'num'
	// This is because a larger factor would have already been found in earlier iterations
	for (int i = 3; i * i <= num; i += 2)  // Start with 3 and skip even numbers (since they can't be prime)
	for (int i = 3; i * i <= num; i += 2)
	{
		// While 'num' is divisible by the current 'i', repeatedly divide it by 'i'
		while (num % i == 0)
		{
			std::cout << i << " ";		// Output the current prime factor 'i'
			num /= i;		// Divide 'num' by 'i' and update it
		}
	}

	// If at the end, 'num' is greater than 2, then 'num' itself is a prime factor
	// This is the case when the remaining 'num' is prime (it was not divisible by any smaller primes)
	if (num > 2)
	{
		std::cout << num << " ";		// Output the remaining prime factor
	}
}

int main()
{

	std::string name;
	int number = 0;
	bool isPlay = true;
	std::string userChoice;

	std::cout << "Please enter your name: ";
	std::cin >> name;

	std::cout << "Hello, " << name << "! Welcome to the Prime Factorization Calculator.\n";


	do
	{
		std::cout << "\nPlease enter a number to find its prime factors: ";
		std::cin >> number;

		std::cout << "The prime factors of " << number  << " are: ";
		findPrimeFactors(number);

		std::cout << "\nWould you like to calculate the prime factors of another number? (yes/no): ";
		std::cin >> userChoice;

		if (userChoice == "y" || userChoice == "yes")
		{
			isPlay = true;
		} 
		else if (userChoice == "n" || userChoice == "no")
		{
			isPlay = false;
		}
		else
		{
			std::cout << "Invalid choice. Please enter 'yes' or 'no'.\n";
			isPlay = false;
		}
	} while (isPlay);

	std::cout << "\nThank you for using the Prime Factorization Calculator!Goodbye!\n";
}