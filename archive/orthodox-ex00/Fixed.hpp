#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int			_fixed_point_number;
		static const int	_number_of_fractional_bits;

	public:
		Fixed(); // default constructor
		Fixed(const Fixed &other); // copy constructor
		Fixed &operator=(const Fixed &other); // copy assigment
		~Fixed(); // Destructor

	int	GetRawBits(void) const;
	void	SetRawBits(int const raw);
};

#endif // FIXED_HPP
