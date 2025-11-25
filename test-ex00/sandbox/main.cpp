#include "Header.hpp"

int	Test::special = 1;

Test::Test() : Stuff1("ahaah"), Stuff2("ohoh") {}

// copy constructor
Test::Test(Test const &other)
{
	this->special = other.special;
	this->Stuff1 = other.Stuff1;
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

	obj.PrintSpecial();
	copyConstrObj.PrintSpecial();
	return 0;
}
