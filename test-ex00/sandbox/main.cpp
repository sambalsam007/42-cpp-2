#include "Header.hpp"

int	Test::special = 1;

Test::Test() : Stuff1("ahaah"), Stuff2("ohoh") {}

// copy constructor
Test::Test(const Test &other)
{
	this->special = other.special;
	this->Stuff1 = other.Stuff1;
}

// copy ass operator
Test	&Test::operator=(const Test &other)
{
	this->special = other.special;
	return (*this);
}

void	Test::PrintSpecial()
{
	std::cout << "special : " << this->special << std::endl;
	std::cout << "not sp : " << this->Stuff1 << std::endl;
	std::cout << "not sp : " << this->Stuff2 << std::endl;
}


int	main()
{
	Test obj;
	Test copyConstrObj(obj);
	Test ass;

	// obj.PrintSpecial();
	// copyConstrObj.PrintSpecial();
	ass = obj;
	ass.PrintSpecial();
	return 0;
}
