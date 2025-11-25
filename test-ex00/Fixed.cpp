#include "Fixed.hpp"

const int Fixed::_number_of_fractional_bits = 8;

Fixed::Fixed() : _fixed_point_number_value(0)
{
	std::cout << "constructor" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor" << std::endl;
	this->_fixed_point_number_value = other._fixed_point_number_value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "copy assignment operator" << std::endl;
	this->_fixed_point_number_value = other._fixed_point_number_value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "destructor" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed_point_number_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_number_value = raw;
}
