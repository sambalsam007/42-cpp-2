#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Box
{
	private:
		std::string _name;
	public:
		Box(std::string name);
		Box(const Box& other);
		Box& operator=(const Box& other);
		~Box();
};

#endif // FIXED_HPP
