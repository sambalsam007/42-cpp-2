#pragma once
#include <iostream>

class	Fixed
{
	private:
		int			_fixed_point_number_value;
		static const int	_number_of_fractional_bits;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};
