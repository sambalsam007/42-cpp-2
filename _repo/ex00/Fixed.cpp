#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_number_value = other.fixed_point_number_value;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator" << std::endl;
	this->fixed_point_number_value = other.fixed_point_number_value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point_number_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_number_value = raw;
}

#define P(element) \
	std::cout  << #element << " = (" << element << ")"<< std::endl;

void Fixed::Test()
{
	// P(fixed_point_number_value);
	// P(number_of_fractional_bits);
}



/*
 $> ./a.out
Default constructor called
Copy constructor called
Copy assignment operator called // <-- This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
*/
