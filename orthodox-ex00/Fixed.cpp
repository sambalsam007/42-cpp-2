#include "Fixed.hpp"

// ok const int, means we can not adjust it. it's constant
// its an integral number
// the number of fractional bits... what is it and why is it 8?
const int Fixed::_number_of_fractional_bits = 8;

// default constructor
Fixed::Fixed() : _fixed_point_number(0)
{
	std::cout << "😑 Default Constructor called" << std::endl;
}

// copy constructor
//
// Q	is this deep copy / shallow copy?
// 	i think shallow copy
Fixed::Fixed(const Fixed &other)
{
	std::cout << "©opy ©onstructor ©alled" << std::endl;
	*this = other;
}


// copy assignment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy ASSignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_point_number = other.GetRawBits();
	return *this;
}
