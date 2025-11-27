#pragma once
#include <iostream>

class	Fixed
{
	private:
		int			fixedPointNumberValue;
		static const int	numberOfFractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		void	Test();


};
