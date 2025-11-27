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

		// operators
		bool	operator > (Fixed const &other) const;
		bool	operator < (Fixed const &other) const;
		bool	operator >= (Fixed const &other) const;
		bool	operator <= (Fixed const &other) const;
		bool	operator == (Fixed const &other) const;
		bool	operator != (Fixed const &other) const;

		// arithmetic operators

		Fixed	operator + (Fixed const &other) const;
		Fixed	operator - (Fixed const &other) const;
		Fixed	operator * (Fixed const &other) const;
		Fixed	operator / (Fixed const &other) const;

		// increment/decrement

		Fixed	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed	operator -- (void);
		Fixed	operator -- (int);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

};

std::ostream &operator<<(std::ostream &os,  Fixed const &fixed);
