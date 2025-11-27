#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed		a(9.993f);
	Fixed		b(9.999f);

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	if (a == b)
		std::cout << "a\n";
	else
		std::cout << "b\n";

	std::cout << "a/b = "<< a/b << std::endl;

	a++;
	std::cout << "a++ " << a << std::endl;
	return 0;
}
