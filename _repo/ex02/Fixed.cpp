#include "Fixed.hpp"

const int Fixed::numberOfFractionalBits = 8;

Fixed::Fixed() : fixedPointNumberValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	// std::cout << "Int constructor called" << std::endl;
	fixedPointNumberValue = number * (1 << numberOfFractionalBits);
}

Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called" << std::endl;
	fixedPointNumberValue = roundf(number * (1 << numberOfFractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNumberValue = other.fixedPointNumberValue;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator" << std::endl;
	this->fixedPointNumberValue = other.fixedPointNumberValue;
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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


/*************/
/* operators */
/*************/

bool	Fixed::operator > (Fixed const &other) const
{
	return (fixedPointNumberValue > other.fixedPointNumberValue);
}

bool	Fixed::operator < (Fixed const &other) const
{
	return (fixedPointNumberValue < other.fixedPointNumberValue);
}

bool	Fixed::operator >= (Fixed const &other) const
{
	return (fixedPointNumberValue >= other.fixedPointNumberValue);
}

bool	Fixed::operator <= (Fixed const &other) const
{
	return (fixedPointNumberValue <= other.fixedPointNumberValue);
}

bool	Fixed::operator == (Fixed const &other) const
{
	return (fixedPointNumberValue == other.fixedPointNumberValue);
}

bool	Fixed::operator != (Fixed const &other) const
{
	return (fixedPointNumberValue != other.fixedPointNumberValue);
}

/************************/
/* arithmetic operators */
/************************/

Fixed	Fixed::operator + (Fixed const &other) const
{
	Fixed	result;
	result.setRawBits(this->fixedPointNumberValue + other.fixedPointNumberValue);
	return	result;
}

Fixed	Fixed::operator - (Fixed const &other) const
{
	Fixed	result;
	result.setRawBits(this->fixedPointNumberValue - other.fixedPointNumberValue);
	return	result;
}

Fixed	Fixed::operator * (Fixed const &other) const
{
	Fixed	result;
	long	temp;

	temp = (long)this->fixedPointNumberValue * (long)other.fixedPointNumberValue;
	temp >>= numberOfFractionalBits;
	result.setRawBits((int)temp);
	return result;
}

Fixed	Fixed::operator / (Fixed const &other) const
{
	Fixed	result;
	long	temp;

	temp = ((long)this->fixedPointNumberValue << numberOfFractionalBits) / other.fixedPointNumberValue;
	result.setRawBits((int)temp);
	return result;
}

/*************************/
/* increment / decrement */
/*************************/

Fixed	Fixed::operator ++ (void) 
{
	this->fixedPointNumberValue++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	temp;

	temp = *this;
	this->fixedPointNumberValue++;
	return temp;
}

Fixed	Fixed::operator -- (void) 
{
	this->fixedPointNumberValue--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp;

	temp = *this;
	this->fixedPointNumberValue--;
	return temp;
}

/***********/
/* min-max */
/***********/

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}
