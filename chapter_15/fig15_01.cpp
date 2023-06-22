// Fig. 15.1: fig15_01.cpp
// Addition program that display the sum of two numbers.
#include <iostream> // allows program to perform input and output

int main()
{
	int number1; // first integer to add
	
	std::cout << "Enter first integer: "; // prompt user for data
	std::cin >> number1; // read first integer from user into number1
	
	int number2; // second integer to add
	int sum; // sum of number1 and number2
	
	std::cout << "Enter seconf integer: "; // prompt user for data
	std::cin >> number2; // read seconf integer from user into number2
	sum = number1 + number2; // add the numbers; store result in sum
	std::cout << "Sum is " << sum << std::endl; // display sum; end line
} // end function main
