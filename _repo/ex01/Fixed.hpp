#pragma once
#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int			fixedPointNumberValue;
		static const int	numberOfFractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int number);
		Fixed(const float number);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

};

std::ostream &operator<<(std::ostream &os,  Fixed const &fixed);
