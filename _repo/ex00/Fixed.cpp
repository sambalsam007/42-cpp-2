#include "Fixed.hpp"

const int Fixed::_number_of_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_number(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment constructor called\n";
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_fixed_point_number);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_number = raw;
}
