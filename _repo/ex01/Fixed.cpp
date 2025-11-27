#include "Fixed.hpp"

const int Fixed::numberOfFractionalBits = 8;

Fixed::Fixed() : fixedPointNumberValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	fixedPointNumberValue = number * (1 << numberOfFractionalBits);
}

Fixed::Fixed(const float number)
{
	fixedPointNumberValue = roundf(number * (1 << numberOfFractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNumberValue = other.fixedPointNumberValue;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator" << std::endl;
	this->fixedPointNumberValue = other.fixedPointNumberValue;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPointNumberValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointNumberValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixedPointNumberValue) / (1 << numberOfFractionalBits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(this->fixedPointNumberValue) / (1 << numberOfFractionalBits));
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}
