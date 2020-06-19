#include <iostream>
 
int main()
{
	std::cout << "Hello, world!";
	return 0;
}

// if program runs but closes immediately
// #include <limits>
// std::cin.clear(); // reset any error flags
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find a newline
// std::cin.get(); // get one more char from the user