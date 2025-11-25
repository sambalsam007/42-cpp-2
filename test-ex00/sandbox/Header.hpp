#pragma once
#include <iostream>

class	Test
{
	private:
		static int	special;
		std::string	Stuff1;
		std::string	Stuff2;
	public:
		Test();
		Test(const Test &other);
		Test &operator=(const Test &other);
		void		PrintSpecial();

};
